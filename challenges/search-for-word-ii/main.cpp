#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto board = asCharMatrix(values.at("board"));
    auto words = asStringVector(values.at("words"));
    Solution solution;
    auto result = solution.findWords(board, words);
    return displayStringVector(result);
}

int main() {
    runExamples({"board=[[\"a\",\"b\",\"c\",\"d\"],[\"s\",\"a\",\"a\",\"t\"],[\"a\",\"c\",\"k\",\"e\"],[\"a\",\"c\",\"d\",\"n\"]]\nwords=[\"bat\",\"cat\",\"back\",\"backend\",\"stack\"]", "board=[[\"x\",\"o\"],[\"x\",\"o\"]]\nwords=[\"xoxo\"]"}, {"[\"cat\",\"back\",\"backend\"]", "[]"});
}
