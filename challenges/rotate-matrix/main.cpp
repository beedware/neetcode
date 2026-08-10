#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto matrix = asIntMatrix(values.at("matrix"));
    Solution solution;
    solution.rotate(matrix);
    return "None";
}

int main() {
    runExamples({"matrix=[[1,2],[3,4]]", "matrix=[[1,2,3],[4,5,6],[7,8,9]]"}, {"[", "["});
}
