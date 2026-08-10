#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isAnagram(string s, string t) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    auto t = asString(values.at("t"));
    Solution solution;
    auto result = solution.isAnagram(s, t);
    return displayBool(result);
}

int main() {
    runExamples({"s=\"racecar\"\nt=\"carrace\"", "s=\"jar\"\nt=\"jam\""}, {"true", "false"});
}
