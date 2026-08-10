#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.maxDepth(root);
    return displayScalar(result);
}

int main() {
    runExamples({"root=[1,2,3,null,null,4]", "root=[]"}, {"3", "0"});
}
