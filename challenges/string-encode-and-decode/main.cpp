#include "../../helper/cpp_runner.hpp"

class Solution {
public:

    string encode(vector<string>& strs) {
        return "";
    }

    vector<string> decode(string s) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto strs = asStringVector(values.at("strs"));
    Solution solution;
    auto result = solution.encode(strs);
    return displayString(result);
}

int main() {
    runExamples({"strs=[\"Hello\",\"World\"]", "strs=[\"\"]"}, {"[\"Hello\",\"World\"]", "[\"\"]"});
}
