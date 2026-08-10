#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums = asIntVector(values.at("nums"));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.topKFrequent(nums, k);
    return displayIntVector(result);
}

int main() {
    runExamples({"nums=[1,2,2,3,3,3]\nk=2", "nums=[7,7]\nk=1"}, {"[2,3]", "[7]"});
}
