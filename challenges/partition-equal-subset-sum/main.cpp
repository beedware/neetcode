#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.canPartition(nums);
    return displayBool(result);
}

int main() {
    runExamples({"nums=[1,2,3,4]", "nums=[1,2,3,4,5]"}, {"true", "false"});
}
