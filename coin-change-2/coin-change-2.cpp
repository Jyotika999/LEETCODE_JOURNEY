class Solution {
public:
    
    int dp[305][5005];
    
    int coinchange(int sum, vector<int>coins, int n)
    {
        if(sum==0)
            return dp[n][sum]=1;
        
        if(n==0)
            return dp[n][sum]=0;
        
        if(dp[n][sum]!=-1)
            return dp[n][sum];
        
        if(coins[n-1]<=sum)
        {
            return dp[n][sum] = coinchange(sum-coins[n-1] , coins, n)+ coinchange(sum, coins, n-1);   
        }
        else
        {
            return dp[n][sum] = coinchange(sum, coins, n-1);
        }
    }
    
    int change(int amount, vector<int>& coins) {
        
        
        int n = coins.size();
        memset(dp, -1, sizeof(dp));
        coinchange(amount, coins, n);
        return dp[n][amount];
        
    }
};