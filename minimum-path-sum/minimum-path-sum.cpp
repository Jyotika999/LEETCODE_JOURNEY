class Solution {
public:
    
    int ans[205][205];
    
    int solve(int n, int m , vector<vector<int>>& grid)
    {
        if(n<0 || m<0)
            return INT_MAX;
        
        if(n==0 && m==0)
            return ans[n][m] = grid[n][m];
        
        if(ans[n][m]!=-1)
            return ans[n][m];
        
        return ans[n][m] = grid[n][m] + min( solve(n-1, m, grid) , solve(n, m-1, grid));
        
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        memset(ans, -1, sizeof(ans));
        
        int t = solve(n-1, m-1, grid);
        
        
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<=m;j++)
        //         cout<<ans[i][j]<<" ";
        //     cout<<"\n";
        // }
        //return ans[n][m];
        return t;
    }
};