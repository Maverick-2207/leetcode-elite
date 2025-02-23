class Solution {
public:
    int fib(int n, vector<int>& dp) {
        if(n <= 1) return n;  // Base Case
        if(dp[n] != -1) return dp[n];  // If already computed, return it

        return dp[n] = fib(n-1, dp) + fib(n-2, dp); // Store result
    }

    int fib(int n) {
        vector<int> dp(n+1, -1);  // Create DP array
        return fib(n, dp);
    }
};
