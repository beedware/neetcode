#include "../../helper/cpp_runner.hpp"

class TimeMap {
public:
    TimeMap() {
    }

    void set(string key, string value, int timestamp) {
        
    }

    string get(string key, int timestamp) {
        return "";
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    TimeMap obj;
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "set" || value.str == "get");
    };
    size_t i = 1;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "set") {
            obj.set(arg.str, arg.str, asIntValue(arg));
            output.push_back("None");
        } else if (op == "get") {
            output.push_back(displayString(obj.get(arg.str, asIntValue(arg))));
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"TimeMap\", \"set\", [\"alice\", \"happy\", 1], \"get\", [\"alice\", 1], \"get\", [\"alice\", 2], \"set\", [\"alice\", \"sad\", 3], \"get\", [\"alice\", 3]]"}, {"[null, null, \"happy\", \"happy\", null, \"sad\"]"});
}
