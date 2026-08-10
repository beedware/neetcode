#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int minDistance(string word1, string word2) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto word1 = asString(values.at("word1"));
    auto word2 = asString(values.at("word2"));
    Solution solution;
    auto result = solution.minDistance(word1, word2);
    return displayScalar(result);
}

int main() {
    runExamples({"word1=\"monkeys\"\nword2=\"money\"", "word1=\"neatcdee\"\nword2=\"neetcode\""}, {"2", "3"});
}
