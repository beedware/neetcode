#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.diameterOfBinaryTree(root);
    return displayScalar(result);
}

int main() {
    runExamples({"root=[1,null,2,3,4,5]", "root=[1,2,3]"}, {"3", "2"});
}
