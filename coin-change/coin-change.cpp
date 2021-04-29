class Solution {
public:
    
    int ans[15][10005];
    
    
    int minimumcoins( vector<int>& coins, int sum , int n )
    {
        if(n==0) // no coin available 
        {
           return ans[n][sum] = INT_MAX -1;
        }
        
     
        if(sum==0)  // sum=0 , means take no coin , empty subset
        {
            return ans[n][sum] = 0;
        }
        
        if(ans[n][sum]!=-1)
            return ans[n][sum];
        
        if(coins[n-1] <= sum)
        {
            return ans[n][sum] = min(1+ minimumcoins(coins, sum-coins[n-1], n), minimumcoins(coins, sum, n-1));
        }
        else
        {
            return  ans[n][sum] = minimumcoins(coins, sum , n-1);
        }
        // sum = 3 , coins[i] = 10
        
        
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
       
        memset(ans, -1, sizeof(ans));
        
        int n = coins.size();
        minimumcoins( coins , amount , n);
        
        for(int i=1;i<=amount; i++)
        {
            if(i % coins[0] ==0)
            {
                ans[1][i] = i/coins[0];
            }
            else
            {
                ans[1][i] = INT_MAX -1;
            }
        }
        
        if(ans[n][amount] !=(INT_MAX-1))
        return ans[n][amount];
        
        else
        return -1;
        
        
        
    }
};