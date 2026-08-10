#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    string longestPalindrome(string s) {
        return "";
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    Solution solution;
    auto result = solution.longestPalindrome(s);
    return displayString(result);
}

int main() {
    runExamples({"s=\"ababd\"", "s=\"abbc\""}, {"\"bab\"", "\"bb\""});
}
