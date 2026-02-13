class Solution {
public:
	bool isValid(std::string &s)
	{
		if (s.length() % 2 != 0)
			return false;
		auto m = std::map<char, char>{
			{'(', ')'},
			{'[', ']'},
			{'{', '}'}
		  };
		auto stack = std::stack<int>{};
		for (auto &i : s)
			if (i == '(' || i == '{' || i == '[') {
				stack.push(m[i]);
				continue;
			} else if (!stack.empty() && stack.top() == i) {
				stack.pop();
				continue;
			} else {
				return false;
			}
		return stack.empty();
	}
};
