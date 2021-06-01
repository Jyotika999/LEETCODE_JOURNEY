class Solution {
public:
    
    int dp[105][105];
    
    int solve(int n, int m , vector<vector<int>>&grid)
    {
        if(n==0 && m==0 && grid[n][m]==0)
            return dp[n][m]=1;
        
        if(n==0 && m==0 && grid[n][m]==1)
            return dp[n][m]=0;
        
        if(n<0 || m<0)
            return 0;
        
        if(dp[n][m]!=-1)
            return dp[n][m];
        
        if(grid[n][m]==1)
            return dp[n][m]=0;
        
       
        return dp[n][m] = solve(n-1, m, grid) + solve(n, m-1, grid);
        
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        
        
        int n = grid.size();
        int m = grid[0].size();
        
        memset(dp, -1, sizeof(dp));
        
        return solve(n-1, m-1, grid);
        
    }
};