#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto list1 = buildList(asIntVector(values.at("list1")));
    auto list2 = buildList(asIntVector(values.at("list2")));
    Solution solution;
    auto result = solution.mergeTwoLists(list1, list2);
    return displayIntVector(listToVector(result));
}

int main() {
    runExamples({"list1=[1,2,4]\nlist2=[1,3,5]", "list1=[]\nlist2=[1,2]"}, {"[1,1,2,3,4,5]", "[1,2]", "[]"});
}
