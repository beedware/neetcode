#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto temperatures = asIntVector(values.at("temperatures"));
    Solution solution;
    auto result = solution.dailyTemperatures(temperatures);
    return displayIntVector(result);
}

int main() {
    runExamples({"temperatures=[30,38,30,36,35,40,28]", "temperatures=[22,21,20]"}, {"[1,4,1,2,1,0,0]", "[0,0,0]"});
}
