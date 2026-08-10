#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.findKthLargest(nums, k);
    return displayScalar(result);
}

int main() {
    runExamples({"nums=[2,3,1,5,4]\nk=2", "nums=[2,3,1,1,5,5,4]\nk=3"}, {"4", "4"});
}
