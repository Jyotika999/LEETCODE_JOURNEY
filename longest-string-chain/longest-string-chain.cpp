class Solution {
public:
    static bool cmp(string s1, string s2)
    {
     return s1.size() < s2.size();
    }
    int longestStrChain(vector<string>& words) 
    {
     int n = words.size(), ans = 1;
     map<string,int>dp;
     sort(words.begin(),words.end(),cmp);
     for(string w : words)
     {
      dp[w] = 1;
      for(int i=0; i<w.length(); i++)
      {
       string temp = w;
       temp.erase(i,1);
       if(dp[temp] > 0) dp[w] = max(dp[w],dp[temp]+1);
      }
      ans = max(ans,dp[w]);
     }
     return ans;
    }
};