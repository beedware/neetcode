#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto head = buildList(asIntVector(values.at("head")));
    auto n = asInt(values.at("n"));
    Solution solution;
    auto result = solution.removeNthFromEnd(head, n);
    return displayIntVector(listToVector(result));
}

int main() {
    runExamples({"head=[1,2,3,4]\nn=2", "head=[5]\nn=1"}, {"[1,2,4]", "[]", "[2]"});
}
