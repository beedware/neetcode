#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int climbStairs(int n) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.climbStairs(n);
    return displayScalar(result);
}

int main() {
    runExamples({"n=2", "n=3"}, {"2", "3"});
}
