#include "../../helper/cpp_runner.hpp"

class WordDictionary {
public:
    WordDictionary() {
    }

    void addWord(string word) {
        
    }

    bool search(string word) {
        return false;
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    WordDictionary obj;
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "addWord" || value.str == "search");
    };
    size_t i = 1;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "addWord") {
            obj.addWord(arg.str);
            output.push_back("None");
        } else if (op == "search") {
            output.push_back(displayBool(obj.search(arg.str)));
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"WordDictionary\",\"addWord\",\"addWord\",\"addWord\",\"search\",\"search\",\"search\",\"search\"]\n[[],[\"day\"],[\"bay\"],[\"may\"],[\"say\"],[\"day\"],[\".ay\"],[\"b..\"]]"}, {"[null, null, null, null, false, true, true, true]"});
}
