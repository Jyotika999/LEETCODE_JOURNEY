class Solution {
public:
    
    int solve(vector<int>&cost, int i, vector<int>&dp)
    {
        if(i<0)
            return 0;
        if(i==0)
        {
            return dp[i]=cost[i];
        }
        // if(i==1)
        // {
        //     return dp[i]=min(cost[0], cost[1]);
        // }
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=min(solve(cost, i-1, dp), solve(cost, i-2, dp))+cost[i];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int>dp(n, -1);
        return min(solve(cost, n-1, dp), solve(cost, n-2, dp));
        
        
        
    }
};