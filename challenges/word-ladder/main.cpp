#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto beginWord = asString(values.at("beginWord"));
    auto endWord = asString(values.at("endWord"));
    auto wordList = asStringVector(values.at("wordList"));
    Solution solution;
    auto result = solution.ladderLength(beginWord, endWord, wordList);
    return displayScalar(result);
}

int main() {
    runExamples({"beginWord=\"cat\"\nendWord=\"sag\"\nwordList=[\"bat\",\"bag\",\"sag\",\"dag\",\"dot\"]", "beginWord=\"cat\"\nendWord=\"sag\"\nwordList=[\"bat\",\"bag\",\"sat\",\"dag\",\"dot\"]"}, {"4", "0"});
}
