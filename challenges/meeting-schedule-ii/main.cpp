#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        return 0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto intervals = buildIntervals(values.at("intervals"));
    Solution solution;
    auto result = solution.minMeetingRooms(intervals);
    return displayScalar(result);
}

int main() {
    runExamples({"intervals=[(0,40),(5,10),(15,20)]", "intervals=[(4,9)]"}, {"2", "1"});
}
