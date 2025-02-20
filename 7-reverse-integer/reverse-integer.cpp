class Solution {
public:
    int reverse(int num) {
        int reversedNumber = 0;
        
        while (num != 0) {
            int digit = num % 10;

            // Check for overflow before multiplying by 10
            if (reversedNumber > INT_MAX / 10 || reversedNumber < INT_MIN / 10) {
                return 0;  // Return 0 if overflow would occur
            }

            reversedNumber = reversedNumber * 10 + digit;
            num /= 10;
        }

        return reversedNumber;
    }
};
