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
    runExamples({"prices=[7,1,5,3,6,4]", "prices=[7,6,4,3,1]"}, {"6", "0"});
}
