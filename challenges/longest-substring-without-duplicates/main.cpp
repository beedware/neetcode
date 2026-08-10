#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    Solution solution;
    auto result = solution.lengthOfLongestSubstring(s);
    return displayScalar(result);
}

int main() {
    runExamples({"s=\"abcabcbb\"", "s=\"bbbbb\"", "s=\"pwwkew\""}, {"3", "1"});
}
