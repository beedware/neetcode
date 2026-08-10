#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    auto wordDict = asStringVector(values.at("wordDict"));
    Solution solution;
    auto result = solution.wordBreak(s, wordDict);
    return displayBool(result);
}

int main() {
    runExamples({"s=\"neetcode\"\nwordDict=[\"neet\",\"code\"]", "s=\"applepenapple\"\nwordDict=[\"apple\",\"pen\",\"ape\"]"}, {"true", "true", "false"});
}
