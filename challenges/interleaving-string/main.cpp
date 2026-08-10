#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s1 = asString(values.at("s1"));
    auto s2 = asString(values.at("s2"));
    auto s3 = asString(values.at("s3"));
    Solution solution;
    auto result = solution.isInterleave(s1, s2, s3);
    return displayBool(result);
}

int main() {
    runExamples({"s1=\"aaaa\"\ns2=\"bbbb\"\ns3=\"aabbbbaa\"", "s1=\"\"\ns2=\"\"\ns3=\"\"", "s1=\"abc\"\ns2=\"xyz\"\ns3=\"abxzcy\""}, {"true", "true", "false"});
}
