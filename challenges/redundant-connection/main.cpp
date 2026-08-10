#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto edges = asIntMatrix(values.at("edges"));
    Solution solution;
    auto result = solution.findRedundantConnection(edges);
    return displayIntVector(result);
}

int main() {
    runExamples({"edges=[[1,2],[1,3],[3,4],[2,4]]", "edges=[[1,2],[1,3],[1,4],[3,4],[4,5]]"}, {"[2,4]", "[3,4]"});
}
