#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.productExceptSelf(nums);
    return displayIntVector(result);
}

int main() {
    runExamples({"nums=[1,2,4,6]", "nums=[-1,0,1,2,3]"}, {"[48,24,12,8]", "[0,-6,0,0,0]"});
}
