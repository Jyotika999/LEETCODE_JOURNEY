class Solution {
public:
    long long int dp[305][5005];
    
    long long int combine(int amount , vector<int>&coins, int n)
    {
        if(amount==0)
        {
            return dp[n][amount] = 1;
        }
        if(n==0)
        {
            return dp[n][amount] = 0;
        }
        
        if(dp[n][amount]!=-1)
            return dp[n][amount];
        
        if(coins[n-1]<= amount)
        {
            return dp[n][amount] = combine(amount , coins, n-1) + combine(amount - coins[n-1] , coins, n);
        }
        else
        {
            return dp[n][amount] = combine(amount, coins, n-1);
        }
    }
    
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        
        // n = 0 , no coins , int_max 
        // sum=0 , always possible , 1
        // choice 
        // if(cur coin <= amount)
        //     include or exclude
        // else
        //     exclude always
            
    //    int dp[n+1][amount+1];
        
           memset(dp, -1, sizeof(dp));
        
            return combine(amount, coins, n);
        
        
        
    }
};