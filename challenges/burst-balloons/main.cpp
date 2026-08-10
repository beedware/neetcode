#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.maxCoins(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[4,2,3,7]"}, {"143"});
}
