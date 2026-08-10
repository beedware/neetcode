#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto strs = asStringVector(values.at("strs"));
    Solution solution;
    auto result = solution.groupAnagrams(strs);
    return displayStringMatrix(result);
}

int main() {
    runExamples({"strs=[\"act\",\"pots\",\"tops\",\"cat\",\"stop\",\"hat\"]", "strs=[\"x\"]"}, {"[[\"hat\"],[\"act\", \"cat\"],[\"stop\", \"pots\", \"tops\"]]", "[[\"x\"]]", "[[\"\"]]"});
}
