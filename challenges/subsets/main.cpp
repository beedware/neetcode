#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.subsets(nums);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"nums=[1,2,3]", "nums=[7]"}, {"[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]", "[[],[7]]"});
}
