#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto points = asIntMatrix(values.at("points"));
    Solution solution;
    auto result = solution.minCostConnectPoints(points);
    return displayScalar(result);
}

int main() {
    runExamples({"points=[[0,0],[2,2],[3,3],[2,4],[4,2]]"}, {"10"});
}
