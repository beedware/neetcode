#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto triplets = asIntMatrix(values.at("triplets"));
    auto target = asIntVector(values.at("target"));
    Solution solution;
    auto result = solution.mergeTriplets(triplets, target);
    return displayBool(result);
}

int main() {
    runExamples({"triplets=[[1,2,3],[7,1,1]]\ntarget=[7,2,3]", "triplets=[[2,5,6],[1,4,4],[5,7,5]]\ntarget=[5,4,6]"}, {"true", "false"});
}
