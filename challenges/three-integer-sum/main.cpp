#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.threeSum(nums);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"nums=[-1,0,1,2,-1,-4]", "nums=[0,1,1]"}, {"[[-1,-1,2],[-1,0,1]]", "[]", "[[0,0,0]]"});
}
