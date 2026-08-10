#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int numDecodings(string s) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    Solution solution;
    auto result = solution.numDecodings(s);
    return displayScalar(result);
}

int main() {
    runExamples({"s=\"12\"", "s=\"226\"", "s=\"06\""}, {"2", "0"});
}
