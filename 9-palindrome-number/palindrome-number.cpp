class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long long rev = 0;
        int original = x;  // Store the original number

        while (x != 0) {
            rev = rev * 10 + x % 10;  // Append the last digit to the reversed number
            x = x / 10;               // Remove the last digit from the original number
        }

        return original == rev;  // Check if the reversed number equals the original
    }
};
