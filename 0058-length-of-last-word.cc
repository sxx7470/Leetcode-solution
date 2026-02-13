class Solution {
public:
    long lengthOfLastWord(std::string s) {
	auto begin = s.rbegin();
	while(begin != s.rend() && *begin == ' ')
		begin++;
	auto end = begin;
	while(end != s.rend() && *end != ' ')
		end++;
	return std::distance(begin, end);
    }
};
