class Solution {
public:
    // Helper function to check palindrome recursively
    bool isPalindromeHelper(string &s, int l, int r) {
        while (l < r && !isalnum(s[l])) l++; // Skip non-alphanumeric  characters
        while (l < r && !isalnum(s[r])) r--; // Skip non-alphanumeric characters

        if (l >= r) return true; // Base case: valid palindrome
        if (tolower(s[l]) != tolower(s[r])) return false; // Case-insensitive check

        return isPalindromeHelper(s, l + 1, r - 1); // Recursive check
    }

    bool isPalindrome(string s) {
        return isPalindromeHelper(s, 0, s.size() - 1);
    }
};