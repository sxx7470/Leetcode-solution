class Solution {
public:
	int removeDuplicates(std::vector<int> &nums)
	{
		std::ranges::sort(nums);
		auto last = std::ranges::unique(nums);
		nums.erase(last.begin(), nums.end());
		return nums.size();
	}
};
