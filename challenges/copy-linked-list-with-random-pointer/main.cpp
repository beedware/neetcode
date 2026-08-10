#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    Node* copyRandomList(Node* head) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto head = buildRandomList(values.at("head"));
    Solution solution;
    auto result = solution.copyRandomList(head);
    return displayNode(result);
}

int main() {
    runExamples({"head=[[3,null],[7,3],[4,0],[5,1]]", "head=[[1,null],[2,2],[3,2]]"}, {"[[3,null],[7,3],[4,0],[5,1]]", "[[1,null],[2,2],[3,2]]"});
}
