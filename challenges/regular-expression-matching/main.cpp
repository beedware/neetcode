#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isMatch(string s, string p) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    auto p = asString(values.at("p"));
    Solution solution;
    auto result = solution.isMatch(s, p);
    return displayBool(result);
}

int main() {
    runExamples({"s=\"aa\"\np=\".b\"", "s=\"nnn\"\np=\"n*\"", "s=\"xyz\"\np=\".*z\""}, {"false", "true", "true"});
}
