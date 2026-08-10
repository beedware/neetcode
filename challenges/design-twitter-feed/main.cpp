#include "../../helper/cpp_runner.hpp"

class Twitter {
public:
    Twitter() {
    }

    void postTweet(int userId, int tweetId) {
        
    }

    vector<int> getNewsFeed(int userId) {
        return {};
    }

    void follow(int followerId, int followeeId) {
        
    }

    void unfollow(int followerId, int followeeId) {
        
    }
};

string runExample(const string& example) {
    auto data = parseValue(example).array;
    vector<string> output;
    Twitter obj;
    output.push_back("None");
    auto isOperation = [](const Value& value) {
        return value.type == Value::STRING && (value.str == "postTweet" || value.str == "getNewsFeed" || value.str == "follow" || value.str == "unfollow");
    };
    size_t i = 1;
    while (i < data.size()) {
        string op = data[i].str;
        Value arg;
        bool hasArg = i + 1 < data.size() && !isOperation(data[i + 1]);
        if (hasArg) arg = data[i + 1];
        if (false) {
        } else if (op == "postTweet") {
            obj.postTweet(asIntValue(arg), asIntValue(arg));
            output.push_back("None");
        } else if (op == "getNewsFeed") {
            output.push_back(displayIntVector(obj.getNewsFeed(asIntValue(arg))));
        } else if (op == "follow") {
            obj.follow(asIntValue(arg), asIntValue(arg));
            output.push_back("None");
        } else if (op == "unfollow") {
            obj.unfollow(asIntValue(arg), asIntValue(arg));
            output.push_back("None");
        }
        i += hasArg ? 2 : 1;
    }
    string out = "[";
    for (size_t j = 0; j < output.size(); j++) { if (j) out += ", "; out += output[j]; }
    return out + "]";
}

int main() {
    runExamples({"[\"Twitter\", \"postTweet\", [1, 10], \"postTweet\", [2, 20], \"getNewsFeed\", [1], \"getNewsFeed\", [2], \"follow\", [1, 2], \"getNewsFeed\", [1], \"getNewsFeed\", [2], \"unfollow\", [1, 2], \"getNewsFeed\", [1]]"}, {"[null, null, null, [10], [20], null, [20, 10], [20], null, [10]]"});
}
