#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto matrix = asIntMatrix(values.at("matrix"));
    Solution solution;
    auto result = solution.spiralOrder(matrix);
    return displayIntVector(result);
}

int main() {
    runExamples({"matrix=[[1,2],[3,4]]", "matrix=[[1,2,3],[4,5,6],[7,8,9]]", "matrix=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]"}, {"[1,2,4,3]", "[1,2,3,6,9,8,7,4,5]", "[1,2,3,4,8,12,11,10,9,5,6,7]"});
}
