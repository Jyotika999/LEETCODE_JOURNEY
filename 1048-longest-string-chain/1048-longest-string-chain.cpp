class Solution {
public:
    
    static bool cmp(string &a, string &b)
    {
        return a.length()<b.length();
    }
    int longestStrChain(vector<string>& words) {
        
        int n = words.size();
        sort(words.begin(), words.end(), cmp);
        int dp[n+1];
        
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
        }
        
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<words[i].length();j++)
            {
                string temp = words[i];
                temp.erase(j, 1);
                
                for(int k=0;k<i;k++)
                {
                    if(words[k]==temp)
                    dp[i] = max(dp[i], dp[k]+1);
                }
            }
            maxi = max(maxi, dp[i]);
        }
        return maxi;
        
        
    }
};