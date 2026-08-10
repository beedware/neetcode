#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto tasks = asCharVector(values.at("tasks"));
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.leastInterval(tasks, n);
    return displayScalar(result);
}

int main() {
    runExamples({"tasks=[\"X\",\"X\",\"Y\",\"Y\"]\nn=2", "tasks=[\"A\",\"A\",\"A\",\"B\",\"C\"]\nn=3"}, {"5", "9"});
}
