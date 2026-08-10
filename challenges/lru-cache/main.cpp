#include "../../helper/cpp_runner.hpp"

class LRUCache {
public:
    LRUCache(int capacity) {
    }

    int get(int key) {
        return 0;
    }

    void put(int key, int value) {
        
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    LRUCache obj(asIntValue(data[1]));
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "get" || value.str == "put");
    };
    size_t i = 3;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "get") {
            output.push_back(displayScalar(obj.get(asIntValue(arg))));
        } else if (op == "put") {
            obj.put(asIntValue(arg), asIntValue(arg));
            output.push_back("None");
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"LRUCache\", [2], \"put\", [1, 10],  \"get\", [1], \"put\", [2, 20], \"put\", [3, 30], \"get\", [2], \"get\", [1]]"}, {"[null, null, 10, null, null, 20, -1]"});
}
