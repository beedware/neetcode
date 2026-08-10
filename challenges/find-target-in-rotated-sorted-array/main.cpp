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
    runExamples({"nums=[3,4,5,6,1,2]\ntarget=1", "nums=[3,5,6,0,1,2]\ntarget=4"}, {"4", "-1"});
}
