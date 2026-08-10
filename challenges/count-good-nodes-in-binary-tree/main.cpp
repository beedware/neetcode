#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int goodNodes(TreeNode* root) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.goodNodes(root);
    return displayScalar(result);
}

int main() {
    runExamples({"root=[2,1,1,3,null,1,5]", "root=[3,3,null,4,2]"}, {"3", "4"});
}
