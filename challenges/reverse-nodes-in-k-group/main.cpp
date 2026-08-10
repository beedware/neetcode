#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto head = buildList(asIntVector(values.at("head")));
    auto k = asInt(values.at("k"));
    Solution solution;
    auto result = solution.reverseKGroup(head, k);
    return displayIntVector(listToVector(result));
}

int main() {
    runExamples({"head=[1,2,3,4,5,6]\nk=3", "head=[1,2,3,4,5]\nk=3"}, {"[3,2,1,6,5,4]", "[3,2,1,4,5]"});
}
