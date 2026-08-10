#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int rob(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.rob(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[3,4,3]", "nums=[2,9,8,3,6]"}, {"4", "15"});
}
