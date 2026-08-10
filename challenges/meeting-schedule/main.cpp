#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        return false;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto intervals = buildIntervals(values.at("intervals"));
    Solution solution;
    auto result = solution.canAttendMeetings(intervals);
    return displayBool(result);
}

int main() {
    runExamples({"intervals=[(0,30),(5,10),(15,20)]", "intervals=[(5,8),(9,15)]"}, {"false", "true"});
}
