#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto matrix = asIntMatrix(values.at("matrix"));
    Solution solution;
    auto result = solution.longestIncreasingPath(matrix);
    return displayScalar(result);
}

int main() {
    runExamples({"matrix=[[5,5,3],[2,3,6],[1,1,1]]", "matrix=[[1,2,3],[2,1,4],[7,6,5]]"}, {"4", "7"});
}
