#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto candidates = asIntVector(values.at("candidates"));
    auto target = asInt(values.at("target"));
    Solution solution;
    auto result = solution.combinationSum2(candidates, target);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"candidates=[9,2,2,4,6,1,5]\ntarget=8", "candidates=[1,2,3,4,5]\ntarget=7"}, {"[", "["});
}
