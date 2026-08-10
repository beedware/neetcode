#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.lengthOfLIS(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[9,1,4,2,3,3,7]", "nums=[0,3,1,3,2,3]"}, {"4", "4"});
}
