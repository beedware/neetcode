#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto board = asCharMatrix(values.at("board"));
    auto word = asString(values.at("word"));
    Solution solution;
    auto result = solution.exist(board, word);
    return displayBool(result);
}

int main() {
    runExamples({"board=[[\"A\",\"B\",\"C\",\"D\"],[\"S\",\"A\",\"A\",\"T\"],[\"A\",\"C\",\"A\",\"E\"]]\nword=\"CAT\"", "board=[[\"A\",\"B\",\"C\",\"D\"],[\"S\",\"A\",\"A\",\"T\"],[\"A\",\"C\",\"A\",\"E\"]]\nword=\"BAT\""}, {"true", "false"});
}
