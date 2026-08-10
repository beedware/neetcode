#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s1 = asString(values.at("s1"));
    auto s2 = asString(values.at("s2"));
    Solution solution;
    auto result = solution.checkInclusion(s1, s2);
    return displayBool(result);
}

int main() {
    runExamples({"s1=\"ab\"\ns2=\"lecabee\"", "s1=\"abc\"\ns2=\"lecaabee\""}, {"true", "false"});
}
