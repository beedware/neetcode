#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto l1 = buildList(asIntVector(values.at("l1")));
    auto l2 = buildList(asIntVector(values.at("l2")));
    Solution solution;
    auto result = solution.addTwoNumbers(l1, l2);
    return displayIntVector(listToVector(result));
}

int main() {
    runExamples({"l1=[1,2,3]\nl2=[4,5,6]", "l1=[9]\nl2=[9]"}, {"[5,7,9]", "[8,1]"});
}
