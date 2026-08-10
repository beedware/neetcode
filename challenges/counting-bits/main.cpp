#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> countBits(int n) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.countBits(n);
    return displayIntVector(result);
}

int main() {
    runExamples({"n=4"}, {"[0,1,1,2,1]"});
}
