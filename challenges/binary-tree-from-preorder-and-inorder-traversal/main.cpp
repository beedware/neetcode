#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto preorder = asIntVector(values.at("preorder"));
    auto inorder = asIntVector(values.at("inorder"));
    Solution solution;
    auto result = solution.buildTree(preorder, inorder);
    return displayJsonArray(treeToVector(result));
}

int main() {
    runExamples({"preorder=[1,2,3,4]\ninorder=[2,1,3,4]", "preorder=[1]\ninorder=[1]"}, {"[1,2,3,null,null,null,4]", "[1]"});
}
