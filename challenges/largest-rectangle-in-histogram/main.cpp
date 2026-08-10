#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto heights = asIntVector(values.at("heights"));
    Solution solution;
    auto result = solution.largestRectangleArea(heights);
    return displayScalar(result);
}

int main() {
    runExamples({"heights=[7,1,7,2,2,4]", "heights=[1,3,7]"}, {"8", "7"});
}
