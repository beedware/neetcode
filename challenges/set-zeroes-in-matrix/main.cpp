#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto matrix = asIntMatrix(values.at("matrix"));
    Solution solution;
    solution.setZeroes(matrix);
    return "None";
}

int main() {
    runExamples({"matrix=[[0,1],[1,0]]", "matrix=[[1,2,3],[4,0,5],[6,7,8]]"}, {"[", "["});
}
