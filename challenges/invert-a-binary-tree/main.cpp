#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.invertTree(root);
    return displayJsonArray(treeToVector(result));
}

int main() {
    runExamples({"root=[4,2,7,1,3,6,9]", "root=[2,1,3]", "root=[]"}, {"[1,3,2,7,6,5,4]", "[3,1,2]", "[]"});
}
