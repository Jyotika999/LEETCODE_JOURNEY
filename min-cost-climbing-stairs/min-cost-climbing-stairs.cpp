class Solution {
public:
    
    int dp[1005];
    int n;
    int solve(int i, vector<int>&cost)
    {
        if(i<=1)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i] = min(solve(i-1, cost) + cost[i-1], solve(i-2, cost)+ cost[i-2]);
        
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        memset(dp, -1, sizeof(dp));
         n = cost.size();
        
        
       return  solve(n, cost);
        // dp[0] = min(cost[0] , cost[1]);
        // dp[1] = min(cost[0] , cost[1]);
        // int temp = solve(2, cost);
        // return dp[n-1];
    }
};