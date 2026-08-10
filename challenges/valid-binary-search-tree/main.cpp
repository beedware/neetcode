#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.isValidBST(root);
    return displayBool(result);
}

int main() {
    runExamples({"root=[2,1,3]", "root=[1,2,3]"}, {"true", "false"});
}
