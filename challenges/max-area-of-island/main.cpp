#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto grid = asIntMatrix(values.at("grid"));
    Solution solution;
    auto result = solution.maxAreaOfIsland(grid);
    return displayScalar(result);
}

int main() {
    runExamples({"grid=[[0,1,1,0,1],[1,0,1,0,1],[0,1,1,0,1],[0,1,0,0,1]]"}, {"6"});
}
