#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = asInt(values.at("n"));
    auto edges = asIntMatrix(values.at("edges"));
    Solution solution;
    auto result = solution.validTree(n, edges);
    return displayBool(result);
}

int main() {
    runExamples({"n=5\nedges=[[0,1],[0,2],[0,3],[1,4]]", "n=5\nedges=[[0,1],[1,2],[2,3],[1,3],[1,4]]"}, {"true", "false"});
}
