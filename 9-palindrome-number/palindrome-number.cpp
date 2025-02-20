class Solution {
public:
    bool isPalindrome(int Num) {
        // Step 1: Negative numbers are not palindromes
        if (Num < 0) return false;

        // Step 2: Reverse the number
        int original = Num;
        int reversed = 0;

        while (Num != 0) {
            if (reversed > INT_MAX / 10) return false;  // Prevent overflow
            reversed = reversed * 10 + Num % 10;
            Num /= 10;
        }

        // Step 3: Check if the reversed number matches the original
        return original == reversed;
    }
};
