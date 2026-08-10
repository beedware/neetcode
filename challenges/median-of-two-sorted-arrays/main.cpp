#include "../../helper/cpp_runner.hpp"

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        return 0.0;
    }
};

string runExample(const string& example) {
    auto values = parseAssignments(example);
    auto nums1 = asIntVector(values.at("nums1"));
    auto nums2 = asIntVector(values.at("nums2"));
    Solution solution;
    auto result = solution.findMedianSortedArrays(nums1, nums2);
    return displayScalar(result);
}

int main() {
    runExamples({"nums1=[1,2]\nnums2=[3]", "nums1=[1,3]\nnums2=[2,4]"}, {"2.0", "2.5"});
}
