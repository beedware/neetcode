#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<string>> partition(string s) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    Solution solution;
    auto result = solution.partition(s);
    return displayStringMatrix(result);
}

int main() {
    runExamples({"s=\"aab\"", "s=\"a\""}, {"[[\"a\",\"a\",\"b\"],[\"aa\",\"b\"]]", "[[\"a\"]]"});
}
