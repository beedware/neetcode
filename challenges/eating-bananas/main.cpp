#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto piles = asIntVector(values.at("piles"));
    auto h = asInt(values.at("h"));
    Solution solution;
    auto result = solution.minEatingSpeed(piles, h);
    return displayScalar(result);
}

int main() {
    runExamples({"piles=[1,4,3,2]\nh=9", "piles=[25,10,23,4]\nh=4"}, {"2", "25"});
}
