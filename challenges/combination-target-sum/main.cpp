#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    auto target = asInt(values.at("target"));
    Solution solution;
    auto result = solution.combinationSum(nums, target);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"nums=[2,5,6,9]\ntarget=9", "nums=[3,4,5]\ntarget=16", "nums=[3]\ntarget=5"}, {"[[2,2,5],[9]]", "[[3,3,3,3,4],[3,3,5,5],[4,4,4,4],[3,4,4,5]]", "[]"});
}
