#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto heights = asIntMatrix(values.at("heights"));
    Solution solution;
    auto result = solution.pacificAtlantic(heights);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"heights=[[4,2,7,3,4],[7,4,6,4,7],[6,3,5,3,6]]", "heights=[[1],[1]]"}, {"[[0,2],[0,4],[1,0],[1,1],[1,2],[1,3],[1,4],[2,0]]", "[[0,0],[1,0]]"});
}
