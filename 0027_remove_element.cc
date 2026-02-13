class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::erase(nums, val);

        return nums.size();
    }
};
