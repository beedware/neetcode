#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int jump(vector<int>& nums) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    Solution solution;
    auto result = solution.jump(nums);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[2,4,1,1,1,1]", "nums=[2,1,2,1,0]"}, {"2", "2"});
}
