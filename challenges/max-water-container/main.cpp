#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int maxArea(vector<int>& heights) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto heights = asIntVector(values.at("heights"));
    Solution solution;
    auto result = solution.maxArea(heights);
    return displayScalar(result);
}

int main() {
    runExamples({"height=[1,7,2,5,4,7,3,6]", "height=[2,2,2]"}, {"36", "4"});
}
