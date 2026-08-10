#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.missingNumber(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[1,2,3]", "nums=[0,2]"}, {"0", "1"});
}
