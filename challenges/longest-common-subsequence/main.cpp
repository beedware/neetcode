#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto text1 = asString(values.at("text1"));
    auto text2 = asString(values.at("text2"));
    Solution solution;
    auto result = solution.longestCommonSubsequence(text1, text2);
    return displayScalar(result);
}

int main() {
    runExamples({"text1=\"crabt\"\ntext2=\"cat\"", "text1=\"abcd\"\ntext2=\"abcd\"", "text1=\"abcd\"\ntext2=\"efgh\""}, {"3", "4", "0"});
}
