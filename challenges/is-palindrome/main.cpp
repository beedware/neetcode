#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isPalindrome(string s) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    Solution solution;
    auto result = solution.isPalindrome(s);
    return displayBool(result);
}

int main() {
    runExamples({"s=\"Was it a car or a cat I saw?\"", "s=\"tab a cat\""}, {"true", "false"});
}
