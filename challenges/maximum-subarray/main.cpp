#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.maxSubArray(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[2,-3,4,-2,2,1,-1,4]", "nums=[-1]"}, {"8", "-1"});
}
