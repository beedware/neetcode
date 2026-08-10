#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    auto subRoot = buildTree(values.at("subRoot"));
    Solution solution;
    auto result = solution.isSubtree(root, subRoot);
    return displayBool(result);
}

int main() {
    runExamples({"root=[1,2,3,4,5]\nsubRoot=[2,4,5]", "root=[1,2,3,4,5,null,null,6]\nsubRoot=[2,4,5]"}, {"true", "false"});
}
