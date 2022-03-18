class Solution {
public:
    
    int dp[1005];
    
    int solve(int n)
    {
        if(n==0)
        {
            return dp[n]=0;
        }
        else if(n==1)
        {
            return dp[n]=1;
        }
        if(dp[n]!=-1)
            return dp[n];
        
        return dp[n]=solve(n-1)+solve(n-2);
        
    }
    int fib(int n) {
        
        memset(dp, -1, sizeof(dp));
        solve(n);
        return dp[n];
        
    }
};