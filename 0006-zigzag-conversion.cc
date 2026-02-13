class Solution {
public:
	std::string convert(std::string s, int numRows)
	{
		if (numRows == 1 || numRows >= s.size())
			return s;
		auto cur_row = 0;
		auto going_down = false;
		auto vec = std::vector<std::string>(numRows);
		for (auto &i : s) {
            vec[cur_row] += i;
			if (cur_row == 0 || cur_row == numRows - 1)
				going_down = !going_down;
			cur_row += going_down ? 1 : -1;
		}
		auto result = std::string{};
		for (auto &i : vec)
			result += i;
		return result;
	}
};
