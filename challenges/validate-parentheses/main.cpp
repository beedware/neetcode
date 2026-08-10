#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isValid(string s) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    Solution solution;
    auto result = solution.isValid(s);
    return displayBool(result);
}

int main() {
    runExamples({"s=\"[]\"", "s=\"([{}])\""}, {"true", "true", "false"});
}
