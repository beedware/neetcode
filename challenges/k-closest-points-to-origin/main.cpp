#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto points = asIntMatrix(values.at("points"));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.kClosest(points, k);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"points=[[0,2],[2,2]]\nk=1", "points=[[0,2],[2,0],[2,2]]\nk=2"}, {"[[0,2]]", "[[0,2],[2,0]]"});
}
