#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto gas = asIntVector(values.at("gas"));
    auto cost = asIntVector(values.at("cost"));
    Solution solution;
    auto result = solution.canCompleteCircuit(gas, cost);
    return displayScalar(result);
}

int main() {
    runExamples({"gas=[1,2,3,4]\ncost=[2,2,4,1]", "gas=[1,2,3]\ncost=[2,3,2]"}, {"3", "-1"});
}
