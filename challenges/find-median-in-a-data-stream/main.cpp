#include "../../helper/cpp_runner.hpp"

class MedianFinder {
public:
    MedianFinder() {
    }

    void addNum(int num) {
        
    }

    double findMedian() {
        return 0.0;
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    MedianFinder obj;
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "addNum" || value.str == "findMedian");
    };
    size_t i = 1;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "addNum") {
            obj.addNum(asIntValue(arg));
            output.push_back("None");
        } else if (op == "findMedian") {
            output.push_back(displayScalar(obj.findMedian()));
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"MedianFinder\", \"addNum\", \"1\", \"findMedian\", \"addNum\", \"2\", \"findMedian\", \"addNum\", \"3\", \"findMedian\"]"}, {"[null, null, 1.0, null, 2.0, null, 2.0]"});
}
