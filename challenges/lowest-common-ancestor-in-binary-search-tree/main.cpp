#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    auto p = buildTree(values.at("p"));
    auto q = buildTree(values.at("q"));
    Solution solution;
    auto result = solution.lowestCommonAncestor(root, p, q);
    return displayJsonArray(treeToVector(result));
}

int main() {
    runExamples({"root=[5,3,8,1,4,7,9,null,2]\np=3\nq=8", "root=[5,3,8,1,4,7,9,null,2]\np=3\nq=4"}, {"5", "3"});
}
