#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto numbers = asIntVector(values.at("numbers"));
    auto target = asInt(values.at("target"));
    Solution solution;
    auto result = solution.twoSum(numbers, target);
    return displayIntVector(result);
}

int main() {
    runExamples({"numbers=[1,2,3,4]\ntarget=3"}, {"[1,2]"});
}
