#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto numCourses = asInt(values.at("numCourses"));
    auto prerequisites = asIntMatrix(values.at("prerequisites"));
    Solution solution;
    auto result = solution.canFinish(numCourses, prerequisites);
    return displayBool(result);
}

int main() {
    runExamples({"numCourses=2\nprerequisites=[[0,1]]", "numCourses=2\nprerequisites=[[0,1],[1,0]]"}, {"true", "false"});
}
