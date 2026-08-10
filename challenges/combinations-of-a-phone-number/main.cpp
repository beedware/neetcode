#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto digits = asString(values.at("digits"));
    Solution solution;
    auto result = solution.letterCombinations(digits);
    return displayStringVector(result);
}

int main() {
    runExamples({"digits=\"34\"", "digits=\"\""}, {"[\"dg\",\"dh\",\"di\",\"eg\",\"eh\",\"ei\",\"fg\",\"fh\",\"fi\"]", "[]"});
}
