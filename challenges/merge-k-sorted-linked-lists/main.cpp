#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto lists = buildListVector(asIntMatrix(values.at("lists")));
    Solution solution;
    auto result = solution.mergeKLists(lists);
    return displayIntVector(listToVector(result));
}

int main() {
    runExamples({"lists=[[1,2,4],[1,3,5],[3,6]]", "lists=[]", "lists=[[]]"}, {"[1,1,2,3,3,4,5,6]", "[]", "[]"});
}
