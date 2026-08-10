#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto tokens = asStringVector(values.at("tokens"));
    Solution solution;
    auto result = solution.evalRPN(tokens);
    return displayScalar(result);
}

int main() {
    runExamples({"tokens=[\"2\",\"1\",\"+\",\"3\",\"*\"]"}, {"5"});
}
