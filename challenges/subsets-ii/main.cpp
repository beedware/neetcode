#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.subsetsWithDup(nums);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"nums=[1,2,1]", "nums=[7,7]"}, {"[[],[1],[1,2],[1,1],[1,2,1],[2]]", "[[],[7], [7,7]]"});
}
