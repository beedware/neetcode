#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    Node* cloneGraph(Node* node) {
        return nullptr;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto node = buildGraph(values.at("node"));
    Solution solution;
    auto result = solution.cloneGraph(node);
    return displayNode(result);
}

int main() {
    runExamples({"adjList=[[2],[1,3],[2]]", "adjList=[[]]", "adjList=[]"}, {"[[2],[1,3],[2]]", "[[]]", "[]"});
}
