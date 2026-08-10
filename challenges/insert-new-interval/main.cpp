#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto intervals = asIntMatrix(values.at("intervals"));
    auto newInterval = asIntVector(values.at("newInterval"));
    Solution solution;
    auto result = solution.insert(intervals, newInterval);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"intervals=[[1,3],[4,6]]\nnewInterval=[2,5]", "intervals=[[1,2],[3,5],[9,10]]\nnewInterval=[6,7]"}, {"[[1,6]]", "[[1,2],[3,5],[6,7],[9,10]]"});
}
