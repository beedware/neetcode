#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto n = asInt(values.at("n"));
    auto flights = asIntMatrix(values.at("flights"));
    auto src = asInt(values.at("src"));
    auto dst = asInt(values.at("dst"));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.findCheapestPrice(n, flights, src, dst, k);
    return displayScalar(result);
}

int main() {
    runExamples({"n=4\nflights=[[0,1,200],[1,2,100],[1,3,300],[2,3,100]]\nsrc=0\ndst=3\nk=1", "n=3\nflights=[[1,0,100],[1,2,200],[0,2,100]]\nsrc=1\ndst=2\nk=1"}, {"500", "200"});
}
