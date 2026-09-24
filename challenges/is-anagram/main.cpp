#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> counts;

        for (char c : s) {
            counts[c]++;
        }

        for (char c : t) {
            if (--counts[c] < 0) {
                return false;
            }
        }

        return true;
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
