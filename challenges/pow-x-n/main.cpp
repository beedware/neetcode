#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    double myPow(double x, int n) {
        return 0.0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto x = asDouble(values.at("x"));
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.myPow(x, n);
    return displayScalar(result);
}

int main() {
    runExamples({"x=2.00000\nn=5", "x=1.10000\nn=10", "x=2.00000\nn=-3"}, {"32.00000", "2.59374", "0.12500"});
}
