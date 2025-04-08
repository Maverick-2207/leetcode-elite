class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1; // Start from 1st index since nums[0] is always unique
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[k - 1]) {
                nums[k++] = nums[i];
            }
        }
        return nums.empty() ? 0 : k;
    }
};
