#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int characterReplacement(string s, int k) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.characterReplacement(s, k);
    return displayScalar(result);
}

int main() {
    runExamples({"s=\"XYYX\"\nk=2", "s=\"AAABABB\"\nk=1"}, {"4", "5"});
}
