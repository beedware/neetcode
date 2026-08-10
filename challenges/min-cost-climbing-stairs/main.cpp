#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto cost = asIntVector(values.at("cost"));
    Solution solution;
    auto result = solution.minCostClimbingStairs(cost);
    return displayScalar(result);
}

int main() {
    runExamples({"cost=[1,2,3]", "cost=[1,2,1,2,1,1,1]"}, {"2", "4"});
}
