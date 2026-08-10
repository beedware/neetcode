#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto coins = asIntVector(values.at("coins"));
    auto amount = asInt(values.at("amount"));
    Solution solution;
    auto result = solution.coinChange(coins, amount);
    return displayScalar(result);
}

int main() {
    runExamples({"coins=[1,2,5]\namount=11", "coins=[2]\namount=3", "coins=[1]\namount=0"}, {"3", "-1", "0"});
}
