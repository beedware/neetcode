#include "../../helper/cpp_runner.hpp"

class MinStack {
public:
    MinStack() {
    }

    void push(int val) {
        
    }

    void pop() {
        
    }

    int top() {
        return 0;
    }

    int getMin() {
        return 0;
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    MinStack obj;
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "push" || value.str == "pop" || value.str == "top" || value.str == "getMin");
    };
    size_t i = 1;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "push") {
            obj.push(asIntValue(arg));
            output.push_back("None");
        } else if (op == "pop") {
            obj.pop();
            output.push_back("None");
        } else if (op == "top") {
            output.push_back(displayScalar(obj.top()));
        } else if (op == "getMin") {
            output.push_back(displayScalar(obj.getMin()));
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"MinStack\", \"push\", 1, \"push\", 2, \"push\", 0, \"getMin\", \"pop\", \"top\", \"getMin\"]"}, {"[null,null,null,null,0,null,2,1]"});
}
