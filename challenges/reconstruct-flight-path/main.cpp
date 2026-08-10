#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        return {};
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto tickets = asStringMatrix(values.at("tickets"));
    Solution solution;
    auto result = solution.findItinerary(tickets);
    return displayStringVector(result);
}

int main() {
    runExamples({"tickets=[[\"BUF\",\"HOU\"],[\"HOU\",\"SEA\"],[\"JFK\",\"BUF\"]]", "tickets=[[\"HOU\",\"JFK\"],[\"SEA\",\"JFK\"],[\"JFK\",\"SEA\"],[\"JFK\",\"HOU\"]]"}, {"[\"JFK\",\"BUF\",\"HOU\",\"SEA\"]", "[\"JFK\",\"HOU\",\"JFK\",\"SEA\",\"JFK\"]"});
}
