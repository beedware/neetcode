#include "../../helper/cpp_runner.hpp"

class PrefixTree {
public:
    PrefixTree() {
    }

    void insert(string word) {
        
    }

    bool search(string word) {
        return false;
    }

    bool startsWith(string prefix) {
        return false;
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    PrefixTree obj;
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "insert" || value.str == "search" || value.str == "startsWith");
    };
    size_t i = 1;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "insert") {
            obj.insert(arg.str);
            output.push_back("None");
        } else if (op == "search") {
            output.push_back(displayBool(obj.search(arg.str)));
        } else if (op == "startsWith") {
            output.push_back(displayBool(obj.startsWith(arg.str)));
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"PrefixTree\", \"insert\", \"apple\", \"search\", \"apple\", \"search\", \"app\", \"startsWith\", \"app\", \"insert\", \"app\", \"search\", \"app\"]"}, {"[null, null, true, false, true, null, true]"});
}
