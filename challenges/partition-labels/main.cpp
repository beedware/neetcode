#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> partitionLabels(string s) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto s = asString(values.at("s"));
    Solution solution;
    auto result = solution.partitionLabels(s);
    return displayIntVector(result);
}

int main() {
    runExamples({"s=\"xyxxyzbzbbisl\"", "s=\"abcabc\""}, {"[5, 5, 1, 1, 1]", "[6]"});
}
