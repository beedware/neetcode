#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.findDuplicate(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[1,2,3,2,2]", "nums=[1,2,3,4,4]"}, {"2", "4"});
}
