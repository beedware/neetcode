#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.generateParenthesis(n);
    return displayStringVector(result);
}

int main() {
    runExamples({"n=1", "n=3"}, {"[\"()\"]", "[\"((()))\",\"(()())\",\"(())()\",\"()(())\",\"()()()\"]"});
}
