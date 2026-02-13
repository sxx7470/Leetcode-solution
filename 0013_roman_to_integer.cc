class Solution {
public:
    int romanToInt(std::string s) {
        auto sum = 0;
        auto m =
            std::unordered_map<char, int>{{'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
                                {'C', 100}, {'D', 500}, {'M', 1'000}};
        auto i = 0UL;
        for (i = 1; i < s.size(); i++) {
            if (m[s[i - 1]] > m[s[i]] || m[s[i - 1]] == m[s[i]])
                sum += m[s[i - 1]];
            if (m[s[i - 1]] < m[s[i]])
                sum -= m[s[i - 1]];
        }
        sum += m[s[i - 1]];
        return sum;
    }
};
