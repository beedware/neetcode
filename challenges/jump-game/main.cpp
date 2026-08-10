#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool canJump(vector<int>& nums) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.canJump(nums);
    return displayBool(result);
}

int main() {
    runExamples({"nums=[1,2,0,1,0]", "nums=[1,2,1,0,1]"}, {"true", "false"});
}
