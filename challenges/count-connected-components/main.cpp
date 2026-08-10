#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = asInt(values.at("n"));
    auto edges = asIntMatrix(values.at("edges"));
    Solution solution;
    auto result = solution.countComponents(n, edges);
    return displayScalar(result);
}

int main() {
    runExamples({"n=5\nedges=[[0,1],[1,2],[3,4]]", "n=5\nedges=[[0,1],[1,2],[2,3],[3,4]]"}, {"2", "1"});
}
