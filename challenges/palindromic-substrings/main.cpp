#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int countSubstrings(string s) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    Solution solution;
    auto result = solution.countSubstrings(s);
    return displayScalar(result);
}

int main() {
    runExamples({"s=\"abc\"", "s=\"aaa\""}, {"3", "6"});
}
