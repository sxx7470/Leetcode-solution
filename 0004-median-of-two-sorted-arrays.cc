class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1,
                                  std::vector<int>& nums2) {
        double result{};
        for (auto i = nums2.begin(); i != nums2.end(); ++i)
            nums1.push_back(*i);
        std::sort(nums1.begin(), nums1.end());
        if (nums1.size() % 2 != 0) {
            result = nums1[nums1.size() / 2];
            return result;
        } else {
            result =
                (nums1[nums1.size() / 2 - 1] + nums1[nums1.size() / 2]) / 2.0;
            return result;
        }
    }
};
