#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int findMin(vector<int> &nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.findMin(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[3,4,5,6,1,2]", "nums=[4,5,0,1,2,3]"}, {"1", "0", "4"});
}
