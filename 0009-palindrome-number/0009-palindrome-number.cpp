class Solution {
public:
    bool isPalindrome(int x) {
        // Step 1: Negative numbers or ending with 0 (but not 0) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversedHalf = 0;
        
        // Step 2: Reverse only half of the number
        while (x > reversedHalf) {
            int digit = x % 10;
            reversedHalf = reversedHalf * 10 + digit;
            x = x / 10;
        }

        // Step 3: Compare halves
        return (x == reversedHalf) || (x == reversedHalf / 10);
    }
};