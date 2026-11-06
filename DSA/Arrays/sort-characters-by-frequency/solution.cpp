class Solution{	
	public:
		vector<char> frequencySort(string& s){
        map<char, int> freq;
        vector<char> ans;
			for(int i = 0;  i < s.length(); i++)
            {
                 freq[s[i]]++;
            }

            for (auto it : freq) {
            ans.push_back(it.first);
              }

            sort(ans.begin(), ans.end(), [&](char a, char b) {
             if (freq[a] != freq[b]) {
             return freq[a] > freq[b]; 
               }
           return a < b;                
            });
         
            return ans;
		}
};