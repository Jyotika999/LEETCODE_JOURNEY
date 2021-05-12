class Solution {
public:
    
    int ans[1005][1005];
    
    int solve(string s, string t, int n, int m)
    {
        if(m==0)
            return 1;
        if(n==0)
            return 0;
        if(ans[n][m]!=-1)
            return ans[n][m];
        
        if( s[n-1] == t[m-1] )
        {
            return ans[n][m] = solve(s, t, n-1, m-1) + solve(s, t, n-1, m);
        }
        else
        {
            return ans[n][m] = solve(s, t, n-1, m);
        }
    
    }
    
    int numDistinct(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        
        
        memset(ans, -1, sizeof(ans));
        
       return  solve(s, t, n, m);
        
        
    }
};