class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
    map<int, int> freq;
    for(int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }
     int secondmaxfreq = 0;
     int maxfreq = 0;

      for (auto it: freq) {
       if (it.second > maxfreq) {
        maxfreq = it.second;
     }
    }
      for(auto it: freq){
      if(it.second > secondmaxfreq && it.second < maxfreq) {
        secondmaxfreq = it.second;
      }
      }
      if(secondmaxfreq == 0) {
        return -1;
      }

      for(auto it: freq){
      if(it.second == secondmaxfreq){
      return it.first;
      }
      }
      return -1;
    }
};