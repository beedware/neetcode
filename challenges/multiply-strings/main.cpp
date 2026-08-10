#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    string multiply(string num1, string num2) {
        return "";
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto num1 = asString(values.at("num1"));
    auto num2 = asString(values.at("num2"));
    Solution solution;
    auto result = solution.multiply(num1, num2);
    return displayString(result);
}

int main() {
    runExamples({"num1=\"3\"\nnum2=\"4\"", "num1=\"111\"\nnum2=\"222\""}, {"\"12\"", "\"24642\""});
}
