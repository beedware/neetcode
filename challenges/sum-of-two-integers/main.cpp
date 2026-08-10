#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int getSum(int a, int b) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto a = asInt(values.at("a"));
    auto b = asInt(values.at("b"));
    Solution solution;
    auto result = solution.getSum(a, b);
    return displayScalar(result);
}

int main() {
    runExamples({"a=1\nb=1", "a=4\nb=7"}, {"2", "11"});
}
