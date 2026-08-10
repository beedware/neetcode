#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto amount = asInt(values.at("amount"));
    auto coins = asIntVector(values.at("coins"));
    Solution solution;
    auto result = solution.change(amount, coins);
    return displayScalar(result);
}

int main() {
    runExamples({"amount=4\ncoins=[1,2,3]", "amount=7\ncoins=[2,4]"}, {"4", "0"});
}
