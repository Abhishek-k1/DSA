// LeetCode #13 - Roman to Integer
//
// Problem:
// Convert a Roman numeral string into an integer
//
// Approach:
// Store the value of each Roman Numeral in a map
// Traverse the string from left to right
// If the current Roman numeral is smaller than the next one
// subtract its value
// Otherwise, add its value
// Finally, add the value of the last Roman numeral
//
// Steps:
// 1. Create a map to store Roman numeral values
// 2.Store values of I, V, X, L, C, D and M
// 3.Create a variable result = 0
// 4.Traverse the string except the last character
// 5.Compare the current character with the next character
// 6. If Current value is smaller than next value, subtract it
// 7. Otherwise, add it
// 8. Add the value of the last character
// 9. Return the result
//
// Time Complexity: O(n)
// Space Complexity: O(1)
//
// n = length of the Roman numeral string
// The map contains only 7 fixed Roman numeral characters


class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;

        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int result = 0;
        for (int i = 0; i < s.length() - 1; i++) {

            if (roman[s[i]] < roman[s[i + 1]]) {
                result = result - roman[s[i]];
            }

            else if (roman[s[i]] >= roman[s[i + 1]]) {
                result = result + roman[s[i]];
            }
        }
        result = result + roman[s[s.length() - 1]];
        return result;
    }
};
