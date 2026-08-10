#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.singleNumber(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[3,2,3]", "nums=[7,6,6,7,8]"}, {"2", "8"});
}
