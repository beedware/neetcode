#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto numCourses = asInt(values.at("numCourses"));
    auto prerequisites = asIntMatrix(values.at("prerequisites"));
    Solution solution;
    auto result = solution.findOrder(numCourses, prerequisites);
    return displayIntVector(result);
}

int main() {
    runExamples({"numCourses=3\nprerequisites=[[1,0]]", "numCourses=3\nprerequisites=[[0,1],[1,2],[2,0]]"}, {"[0,1,2]", "[]"});
}
