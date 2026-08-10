#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    string foreignDictionary(vector<string>& words) {
        return "";
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto words = asStringVector(values.at("words"));
    Solution solution;
    auto result = solution.foreignDictionary(words);
    return displayString(result);
}

int main() {
    runExamples({"words=[\"z\",\"o\"]", "words=[\"hrn\",\"hrf\",\"er\",\"enn\",\"rfnn\"]", "words=[\"abc\",\"ab\"]"}, {"\"zo\"", "\"hernf\"", "\"\""});
}
