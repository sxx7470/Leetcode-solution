class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        auto max_len = 0;
        auto left = 0;
        auto right = 0;
        auto unordered_set = std::unordered_set<char>{};
        while (right < s.size()) {
            if (unordered_set.count(s[right]) == 0) {
                unordered_set.insert(s[right]);
                right++;
                max_len = std::max(max_len, right - left);
            } else {
                unordered_set.erase(s[left]);
                left++;
            }
        }
        return max_len;
    }
};
