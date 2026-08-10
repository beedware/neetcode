#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    Solution solution;
    auto result = solution.rightSideView(root);
    return displayIntVector(result);
}

int main() {
    runExamples({"root=[1,2,3,null,4,null,5]", "root=[1,2,3,4,null,null,null,5]"}, {"[1,3,5]", "[1,3,4,5]", "[1,2]", "[]"});
}
