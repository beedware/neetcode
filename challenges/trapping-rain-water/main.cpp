#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int trap(vector<int>& height) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto height = asIntVector(values.at("height"));
    Solution solution;
    auto result = solution.trap(height);
    return displayScalar(result);
}

int main() {
    runExamples({"height=[0,2,0,3,1,0,1,3,2,1]"}, {"9"});
}
