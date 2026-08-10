#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto grid = asIntMatrix(values.at("grid"));
    Solution solution;
    auto result = solution.swimInWater(grid);
    return displayScalar(result);
}

int main() {
    runExamples({"grid=[[0,1],[2,3]]", "grid=[[0,1,2,10],[9,14,4,13],[12,3,8,15],[11,5,7,6]]]"}, {"3", "8"});
}
