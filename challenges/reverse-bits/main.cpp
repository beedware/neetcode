#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = (uint32_t)asInt(values.at("n"));
    Solution solution;
    auto result = solution.reverseBits(n);
    return displayScalar(result);
}

int main() {
    runExamples({"n=00000000000000000000000000010101"}, {"2818572288 (10101000000000000000000000000000)"});
}
