#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool hasCycle(ListNode* head) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto head = buildList(asIntVector(values.at("head")));
    Solution solution;
    auto result = solution.hasCycle(head);
    return displayBool(result);
}

int main() {
    runExamples({"head=[1,2,3,4]\nindex=1", "head=[1,2]\nindex=-1"}, {"true", "false"});
}
