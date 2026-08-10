#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto intervals = asIntMatrix(values.at("intervals"));
    auto queries = asIntVector(values.at("queries"));
    Solution solution;
    auto result = solution.minInterval(intervals, queries);
    return displayIntVector(result);
}

int main() {
    runExamples({"intervals=[[1,3],[2,3],[3,7],[6,6]]\nqueries=[2,3,1,7,6,8]"}, {"[2,2,3,5,1,-1]"});
}
