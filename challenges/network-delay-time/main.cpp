#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto times = asIntMatrix(values.at("times"));
    auto n = asInt(values.at("n"));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.networkDelayTime(times, n, k);
    return displayScalar(result);
}

int main() {
    runExamples({"times=[[1,2,1],[2,3,1],[1,4,4],[3,4,1]]\nn=4\nk=1", "times=[[1,2,1],[2,3,1]]\nn=3\nk=2"}, {"3", "-1"});
}
