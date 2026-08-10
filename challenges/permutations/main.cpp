#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.permute(nums);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"nums=[1,2,3]", "nums=[7]"}, {"[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]", "[[7]]"});
}
