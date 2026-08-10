#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto matrix = asIntMatrix(values.at("matrix"));
    auto target = asInt(values.at("target"));
    Solution solution;
    auto result = solution.searchMatrix(matrix, target);
    return displayBool(result);
}

int main() {
    runExamples({"matrix=[[1,3,5,7],[10,11,16,20],[23,30,34,60]]\ntarget=3", "matrix=[[1,3,5,7],[10,11,16,20],[23,30,34,60]]\ntarget=13"}, {"true", "false"});
}
