#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        return seen.size() != nums.size();
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.hasDuplicate(nums);
    return displayBool(result);
}

int main() {
    runExamples({"nums=[1,2,3,3]", "nums=[1,2,3,4]"}, {"true", "false"});
}
