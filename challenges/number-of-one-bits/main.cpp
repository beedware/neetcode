#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int hammingWeight(uint32_t n) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = (uint32_t)asInt(values.at("n"));
    Solution solution;
    auto result = solution.hammingWeight(n);
    return displayScalar(result);
}

int main() {
    runExamples({"n=00000000000000000000000000001011", "n=01111111111111111111111111111101"}, {"4", "30"});
}
