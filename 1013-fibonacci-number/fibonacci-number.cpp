class Solution {
public:
    int fib(int n) {
        // Base cases
        if (n <= 1) return n;
        
        // Recursive calculation
        return fib(n - 1) + fib(n - 2);
    }
};