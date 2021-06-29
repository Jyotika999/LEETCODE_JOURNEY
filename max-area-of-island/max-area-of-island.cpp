class Solution {
public:
    
    int ct=0;
    void dfs(int i, int j, vector<vector<int>>&grid)
    {
        if(i<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
            return ;
        
        grid[i][j]=0;
        ct++;
        
        dfs(i, j+1, grid);
        dfs(i, j-1, grid);
        dfs(i+1, j, grid);
        dfs(i-1, j, grid);
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int maxi=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i, j, grid);
                    maxi = max( maxi, ct);
                }
                ct=0;
                
            }
        }
        
        return maxi;
        
    }
};