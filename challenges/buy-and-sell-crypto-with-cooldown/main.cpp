#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto prices = asIntVector(values.at("prices"));
    Solution solution;
    auto result = solution.maxProfit(prices);
    return displayScalar(result);
}

int main() {
    runExamples({"prices=[1,3,4,0,4]", "prices=[1]"}, {"6", "0"});
}
