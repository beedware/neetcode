#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto stones = asIntVector(values.at("stones"));
    Solution solution;
    auto result = solution.lastStoneWeight(stones);
    return displayScalar(result);
}

int main() {
    runExamples({"stones=[2,3,6,2,4]", "stones=[1,2]"}, {"1", "1"});
}
