#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    auto target = asInt(values.at("target"));
    Solution solution;
    auto result = solution.search(nums, target);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[-1,0,2,4,6,8]\ntarget=4", "nums=[-1,0,2,4,6,8]\ntarget=3"}, {"3", "-1"});
}
