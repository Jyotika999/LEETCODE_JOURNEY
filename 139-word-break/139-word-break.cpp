class Solution {
public:
     map<string, int>mp;
        
    bool wordBreak(string s, vector<string>& words) {
        
        int n = s.length();
        int n1 = words.size();
        
        for(int i=0;i<n1;i++)
        {
            mp[words[i]]++;
        }
        
        vector<int>dp(n+1, 0);
        
        dp[n]=1;
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                string str1 = string(&s[i], &s[j+1]);
                // string str2 = s.substr(j+1, n);
                if(mp[str1] and dp[j+1]==1)
                {
                    dp[i]=1;
                    break;
                }
            }
        }
        
        for(int i=0;i<n;i++)
            cout<<dp[i]<<"\n";
        return dp[0];
        
        
        
    }
};