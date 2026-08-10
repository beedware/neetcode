#include "../../helper/cpp_runner.hpp"

class CountSquares {
public:
    CountSquares() {
    }

    void add(vector<int> point) {
        
    }

    int count(vector<int> point) {
        return 0;
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    CountSquares obj;
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "add" || value.str == "count");
    };
    size_t i = 1;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "add") {
            obj.add(asIntVectorValue(arg));
            output.push_back("None");
        } else if (op == "count") {
            output.push_back(displayScalar(obj.count(asIntVectorValue(arg))));
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"CountSquares\", \"add\", [[1, 1]], \"add\", [[2, 2]], \"add\", [[1, 2]], \"count\", [[2, 1]], \"count\", [[3, 3]], \"add\", [[2, 2]], \"count\", [[2, 1]]]"}, {"[null, null, null, null, 1, 0, null, 2]"});
}
