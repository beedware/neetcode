#include "../../helper/cpp_runner.hpp"

class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
    }

    int add(int val) {
        return 0;
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    auto constructorNums = asIntVectorValue(data[2]);
    KthLargest obj(asIntValue(data[1]), constructorNums);
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "add");
    };
    size_t i = 3;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "add") {
            output.push_back(displayScalar(obj.add(asIntValue(arg))));
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"KthLargest\", [3, [1, 2, 3, 3]], \"add\", [3], \"add\", [5], \"add\", [6], \"add\", [7], \"add\", [8]]"}, {"[null, 3, 3, 3, 5, 6]"});
}
