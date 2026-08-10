#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    auto target = asInt(values.at("target"));
    Solution solution;
    auto result = solution.findTargetSumWays(nums, target);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[2,2,2]\ntarget=4"}, {"3"});
}
