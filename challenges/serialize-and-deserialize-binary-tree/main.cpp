#include "../../helper/cpp_runner.hpp"

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        return "";
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    TreeNode* root = buildTree(values.at("root"));
    Codec codec;
    return displayJsonArray(treeToVector(codec.deserialize(codec.serialize(root))));
}

int main() {
    runExamples({"root=[1,2,3,null,null,4,5]", "root=[]"}, {"[1,2,3,null,null,4,5]", "[]"});
}
