#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isHappy(int n) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.isHappy(n);
    return displayBool(result);
}

int main() {
    runExamples({"n=100", "n=101"}, {"true", "false"});
}
