#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.maxProduct(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[2,4,-3,5]", "nums=[-3,0,-2]"}, {"8", "0"});
}
