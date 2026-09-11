class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlength = strs[0].size();
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].size() < minlength) {
                minlength = strs[i].size();
            }
        }
        string prefix = "";
        for (int j = 0; j < minlength; j++) {
            for (int i = 1; i < strs.size(); i++) {
                if (strs[0][j] != strs[i][j]) {
                    return prefix;
                }
            }
            prefix += strs[0][j];
        }
        return prefix;
    }
};