class Solution {
public:
    int dp[50];
    
    
    int solve(int n)
    {
        if(n<=0)
            return 0;
        
        if(dp[n]!=-1)
            return dp[n];
        
        if(n==1)
            return dp[n]=1;
        
        if(n==2)
            return dp[n]=2;
        
        return dp[n] = solve(n-1)+solve(n-2);
    }
    int climbStairs(int n) {
    
        memset(dp, -1, sizeof(dp));
        
        return solve(n);
    }
};