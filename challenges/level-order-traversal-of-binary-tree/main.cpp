#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.levelOrder(root);
    return displayIntMatrix(result);
}

int main() {
    runExamples({"root=[1,2,3,4,5,6,7]", "root=[1]", "root=[]"}, {"[[1],[2,3],[4,5,6,7]]", "[[1]]", "[]"});
}
