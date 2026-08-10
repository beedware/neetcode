#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    auto target = asInt(values.at("target"));
    Solution solution;
    auto result = solution.twoSum(nums, target);
    return displayIntVector(result);
}

int main() {
    runExamples({"nums=[3,4,5,6]\ntarget=7", "nums=[4,5,6]\ntarget=10"}, {"[0,1]", "[0,2]", "[0,1]"});
}
