#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto grid = asIntMatrix(values.at("grid"));
    Solution solution;
    auto result = solution.orangesRotting(grid);
    return displayScalar(result);
}

int main() {
    runExamples({"grid=[[1,1,0],[0,1,1],[0,1,2]]", "grid=[[1,0,1],[0,2,0],[1,0,1]]"}, {"4", "-1"});
}
