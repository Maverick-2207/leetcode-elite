// LeetCode Problem: Rearrange Array Elements by Sign
// Problem Statement: Given an array of integers, rearrange the elements so that positive and negative numbers alternate.
// The positive numbers will be placed at even indices (0-based), and negative numbers at odd indices.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size(); // Get the size of the input array

        // Create a result vector of the same size, initialized with 0
        vector<int> ans(n);

        // Initialize two pointers:
        // 'pos' starts at 0 for placing positive numbers at even indices
        // 'neg' starts at 1 for placing negative numbers at odd indices
        int pos = 0, neg = 1;

        // Traverse through each element in the input array
        for(int i = 0; i < n; i++) {

            // If current number is negative, place it at the 'neg' index
            if(nums[i] < 0) {
                ans[neg] = nums[i];
                neg += 2; // Move to the next odd index
            }

            // If current number is positive or zero, place it at the 'pos' index
            else {
                ans[pos] = nums[i];
                pos += 2; // Move to the next even index
            }
        }

        // Return the rearranged array
        return ans;
    }
};
