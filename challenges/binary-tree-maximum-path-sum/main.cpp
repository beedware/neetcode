#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.maxPathSum(root);
    return displayScalar(result);
}

int main() {
    runExamples({"root=[1,2,3]", "root=[-15,10,20,null,null,15,5,-5]"}, {"6", "40"});
}
