class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
        string ans = "";
		for(int i = 0; i < str[0].size(); i++)
        {
        for(int j = 1; j < str.size(); j++)
        {
          if(i >= str[j].size() || str[j][i] != str[0][i])
            {
              return ans;
            }
        }
        ans.push_back(str[0][i]);
        }
         return ans;
		}
};