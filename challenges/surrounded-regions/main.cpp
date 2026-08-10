#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto board = asCharMatrix(values.at("board"));
    Solution solution;
    solution.solve(board);
    return "None";
}

int main() {
    runExamples({"board=[[\"X\",\"X\",\"X\",\"X\"],[\"X\",\"O\",\"O\",\"X\"],[\"X\",\"X\",\"O\",\"X\"],[\"X\",\"O\",\"X\",\"X\"]]", "board=[[\"X\"]]"}, {"[", "[[\"X\"]]"});
}
