#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.isBalanced(root);
    return displayBool(result);
}

int main() {
    runExamples({"root=[1,2,3,null,null,4]", "root=[1,2,3,null,null,4,null,5]", "root=[]"}, {"true", "false", "true"});
}
