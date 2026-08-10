#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.maxSlidingWindow(nums, k);
    return displayIntVector(result);
}

int main() {
    runExamples({"nums=[1,2,1,0,4,2,6]\nk=3"}, {"[2,2,4,4,6]"});
}
