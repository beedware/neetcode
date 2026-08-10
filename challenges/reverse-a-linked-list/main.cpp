#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto head = buildList(asIntVector(values.at("head")));
    Solution solution;
    auto result = solution.reverseList(head);
    return displayIntVector(listToVector(result));
}

int main() {
    runExamples({"head=[0,1,2,3]", "head=[]"}, {"[3,2,1,0]", "[]"});
}
