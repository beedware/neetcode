#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.solveNQueens(n);
    return displayStringMatrix(result);
}

int main() {
    runExamples({"n=4", "n=1"}, {"[[\".Q..\",\"...Q\",\"Q...\",\"..Q.\"],[\"..Q.\",\"Q...\",\"...Q\",\".Q..\"]]", "[[\"Q\"]]"});
}
