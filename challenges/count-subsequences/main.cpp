#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int numDistinct(string s, string t) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    auto t = asString(values.at("t"));
    Solution solution;
    auto result = solution.numDistinct(s, t);
    return displayScalar(result);
}

int main() {
    runExamples({"s=\"caaat\"\nt=\"cat\"", "s=\"xxyxy\"\nt=\"xy\""}, {"3", "5"});
}
