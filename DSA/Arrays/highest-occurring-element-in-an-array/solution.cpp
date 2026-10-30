class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
     map<int, int> freq;
     for(int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
     }
     int maxfreq = 0;
     int ans = 0;

     for (auto it: freq)
     if (it.second > maxfreq) {
        maxfreq = it.second;
        ans = it.first;
     }
    return ans;
    }
};