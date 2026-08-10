#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    string minWindow(string s, string t) {
        return "";
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    auto t = asString(values.at("t"));
    Solution solution;
    auto result = solution.minWindow(s, t);
    return displayString(result);
}

int main() {
    runExamples({"s=\"OUZODYXAZV\"\nt=\"XYZ\"", "s=\"xyz\"\nt=\"xyz\"", "s=\"x\"\nt=\"xy\""}, {"\"YXAZ\"", "\"xyz\"", "\"\""});
}
