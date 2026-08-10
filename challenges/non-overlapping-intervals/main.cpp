#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto intervals = asIntMatrix(values.at("intervals"));
    Solution solution;
    auto result = solution.eraseOverlapIntervals(intervals);
    return displayScalar(result);
}

int main() {
    runExamples({"intervals=[[1,2],[2,4],[1,4]]", "intervals=[[1,2],[2,4]]"}, {"1", "0"});
}
