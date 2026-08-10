#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto digits = asIntVector(values.at("digits"));
    Solution solution;
    auto result = solution.plusOne(digits);
    return displayIntVector(result);
}

int main() {
    runExamples({"digits=[1,2,3,4]", "digits=[9,9,9]"}, {"[1,2,3,5]", "[1,0,0,0]"});
}
