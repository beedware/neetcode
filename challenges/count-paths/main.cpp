#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int uniquePaths(int m, int n) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto m = asInt(values.at("m"));
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.uniquePaths(m, n);
    return displayScalar(result);
}

int main() {
    runExamples({"m=3\nn=6", "m=3\nn=3"}, {"21", "6"});
}
