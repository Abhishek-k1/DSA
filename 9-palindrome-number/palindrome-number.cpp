// Leetcode #9 - Palindrome Number
//
// Approach:
// Reverse the given number and compare it with the original number
// Steps:
// 1. If x is negative, return false
// 2. Store the original number
// 3. Extract the last digit using % 10
// 4. Build the reversed number
// 5. Remove the last digit using / 10
// 6. Compare original and reverse
//
// Time Complexity: O(log n)
// Space Complexity: O(1)
  
class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }
        int original = x;
        long long reverse = 0;

        while (x != 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        if (original == reverse) {
            return true;
        } else {
            return false;
        }
    }
};
