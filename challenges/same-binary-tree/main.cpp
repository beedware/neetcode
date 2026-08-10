#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto p = buildTree(values.at("p"));
    auto q = buildTree(values.at("q"));
    Solution solution;
    auto result = solution.isSameTree(p, q);
    return displayBool(result);
}

int main() {
    runExamples({"p=[1,2,3]\nq=[1,2,3]", "p=[4,7]\nq=[4,null,7]", "p=[1,2,3]\nq=[1,3,2]"}, {"true", "false", "false"});
}
