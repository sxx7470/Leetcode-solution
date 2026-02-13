class Solution {
public:
    std::string longestPalindrome(std::string s) {
        if (s.size() < 2)
            return s;
        auto start = 0;
        auto maxlen = 1;
        for (auto i = 0; i < s.size(); i++) {
            for (auto j : {0, 1}) {
                auto left = i;
                auto right = i + j;
                while (left >= 0 && right < s.size() && s[left] == s[right]) {
                    auto len = right - left + 1;
                    if (len > maxlen) {
                        start = left;
                        maxlen = len;
                    }
                    left--;
                    right++;
                }
            }
        }
        return s.substr(start, maxlen);
    }
};
