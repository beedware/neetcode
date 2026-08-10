#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int reverse(int x) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto x = asInt(values.at("x"));
    Solution solution;
    auto result = solution.reverse(x);
    return displayScalar(result);
}

int main() {
    runExamples({"x=1234", "x=-1234", "x=1234236467"}, {"4321", "-4321", "0"});
}
