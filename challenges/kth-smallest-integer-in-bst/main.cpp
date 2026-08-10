#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto root = buildTree(values.at("root"));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.kthSmallest(root, k);
    return displayScalar(result);
}

int main() {
    runExamples({"root=[2,1,3]\nk=1", "root=[4,3,5,2,null]\nk=4"}, {"1", "5"});
}
