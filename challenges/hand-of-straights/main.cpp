#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto hand = asIntVector(values.at("hand"));
    auto groupSize = asInt(values.at("groupSize"));
    Solution solution;
    auto result = solution.isNStraightHand(hand, groupSize);
    return displayBool(result);
}

int main() {
    runExamples({"hand=[1,2,4,2,3,5,3,4]\ngroupSize=4", "hand=[1,2,3,3,4,5,6,7]\ngroupSize=4"}, {"true", "false"});
}
