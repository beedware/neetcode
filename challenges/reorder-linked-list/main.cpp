#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    void reorderList(ListNode* head) {
        
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto head = buildList(asIntVector(values.at("head")));
    Solution solution;
    solution.reorderList(head);
    return "None";
}

int main() {
    runExamples({"head=[2,4,6,8]", "head=[2,4,6,8,10]"}, {"[2,8,4,6]", "[2,10,4,8,6]"});
}
