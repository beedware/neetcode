#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.longestConsecutive(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[2,20,4,10,3,4,5]", "nums=[0,3,2,5,4,6,1,1]"}, {"4", "7"});
}
