#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.hasDuplicate(nums);
    return displayBool(result);
}

int main() {
    runExamples({"nums=[1,2,3,3]", "nums=[1,2,3,4]"}, {"true", "false"});
}
