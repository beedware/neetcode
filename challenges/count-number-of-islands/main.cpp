#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto grid = asCharMatrix(values.at("grid"));
    Solution solution;
    auto result = solution.numIslands(grid);
    return displayScalar(result);
}

int main() {
    runExamples({"grid=[[\"0\",\"1\",\"1\",\"1\",\"0\"],[\"0\",\"1\",\"0\",\"1\",\"0\"],[\"1\",\"1\",\"0\",\"0\",\"0\"],[\"0\",\"0\",\"0\",\"0\",\"0\"]]", "grid=[[\"1\",\"1\",\"0\",\"0\",\"1\"],[\"1\",\"1\",\"0\",\"0\",\"1\"],[\"0\",\"0\",\"1\",\"0\",\"0\"],[\"0\",\"0\",\"0\",\"1\",\"1\"]]"}, {"1", "4"});
}
