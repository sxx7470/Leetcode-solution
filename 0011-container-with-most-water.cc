class Solution {
public:
int maxArea(std::vector<int> &height)
{
	auto max_water = 0;
	auto begin = 0;
	auto end = height.size() - 1;
	while(begin < end){
		int water = std::min(height[begin], height[end]) * (end - begin);
		max_water = std::max(water, max_water);
		if(height[begin] < height[end])
			begin++;
		else
			end--;
	}
	return max_water;
}
};
