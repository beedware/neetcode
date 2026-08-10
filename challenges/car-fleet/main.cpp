#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto target = asInt(values.at("target"));
    auto position = asIntVector(values.at("position"));
    auto speed = asIntVector(values.at("speed"));
    Solution solution;
    auto result = solution.carFleet(target, position, speed);
    return displayScalar(result);
}

int main() {
    runExamples({"target=10\nposition=[1,4]\nspeed=[3,2]", "target=10\nposition=[4,1,0,7]\nspeed=[2,2,1,1]"}, {"1", "3"});
}
