class Solution {
public:
    bool dp[1005][1005];
    
    string longestPalindrome(string s) {
          int len = s.length();
       
        // rows --> string position
        // columns --> ending position
        
        memset(dp, false, sizeof(dp));
        
        int count =0;
        int maxlen=0;
        int start = -1;
        int endd = -1;
     
        for(int i=len-1; i>=0 ; i--)
        {
            for(int j=i ; j<len ; j++)
            {
                if(i==j)
                {
                    dp[i][j] = true;
                }
                else if(i+1 == j)
                {
                    dp[i][j] = (s[i]==s[j])? true : false;
                }
                else
                {
                    if(s[i] == s[j])
                    dp[i][j] = dp[i+1][j-1];
                    else
                    dp[i][j] = false;
                }
                
                if(dp[i][j] == true)
                {
                    
                    if(j-i+1 > maxlen)
                    {
                       // cout<<i<<" "<<j<<" "<<s.substr(i, j+1)<<" \n";
                        maxlen = j-i+1;
                        start  = i;
                        endd = j;
                    }
                }
            }
        }
        
        string ans="";
        for(int i=start ; i<=endd; i++)
        {
            ans+= s[i];
        }
        return ans;
        
    }
};
