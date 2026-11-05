class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
			if(s.length() != t.length()) {
                return false;
            }
            int freq[256] = {0};
            for (int i = 0; i < s.length(); i++) {
           freq[s[i]]++;
            }
            for(int j = 0; j < t.length(); j++){
                freq[t[j]]--;
            }
            for (int i = 0; i < 256; i++) {
            if (freq[i] != 0) {
            return false;
       }
    }
    return true;
	}
};