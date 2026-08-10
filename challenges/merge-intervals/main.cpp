#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto intervals = asIntMatrix(values.at("intervals"));
    Solution solution;
    auto result = solution.merge(intervals);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"intervals=[[1,3],[1,5],[6,7]]", "intervals=[[1,2],[2,3]]"}, {"[[1,5],[6,7]]", "[[1,3]]"});
}
