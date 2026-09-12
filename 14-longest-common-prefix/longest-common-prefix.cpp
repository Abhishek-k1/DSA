// LeetCode #14 - Longest Common Prefix
//
// Problem:
// Find the longest common prefix shared by all strings
//
// Example:
// Input:  ["flower", "flow", "flight"]
// Output: "fl"
//
// Approach:
// First find the length of the shortest string
// Then compare characters at the same position in all strings
// If a mismatch is found, return the prefix built so far
// If all strings have the same character, add that character to prefix
//
// Steps:
// 1. Find the length of the shortest string
// 2. Create an empty string called prefix
// 3. Compare each character position using the first string as reference
// 4. If characters are different, return prefix
// 5. If characters match, add the character to prefix
// 6. After checking all positions, return prefix
//
// Time Complexity: O(n × m)
// Space Complexity: O(1) auxiliary space
//
// where:
// n = number of strings
// m = length of the shortest string

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // Find the length of the shortest string
        int minlength = strs[0].size();
        for (int i = 0; i < strs.size(); i++) {

            // Update minlength if current string is shorter
            if (strs[i].size() < minlength) {
                minlength = strs[i].size();
            }
        }

        // Store the common prefix
        string prefix = "";

        // Check each character position
        for (int j = 0; j < minlength; j++) {

            // Compare with all other strings
            for (int i = 1; i < strs.size(); i++) {

                // If characters  are different, return prefix
                if (strs[0][j] != strs[i][j]) {
                    return prefix;
                }
            }

            // Add the matching character to prefix
            prefix += strs[0][j];
        }

        // Return the final common prefix
        return prefix;
    }
};
