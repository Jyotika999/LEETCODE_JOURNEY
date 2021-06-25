class Solution {
public:
    int n ,m;
    int vis[305][305];
    
    void dfs(int i, int j, vector<vector<char>>& grid)
    {
        
        if(i>=n or i<0 or j>=m or j<0 or grid[i][j]=='0' or vis[i][j]==1)
            return;
        
        vis[i][j]=1;
        
        dfs(i+1, j, grid);
        dfs(i, j+1, grid);
        dfs(i-1, j, grid);
        dfs(i, j-1, grid);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
         n = grid.size();
         m = grid[0].size();
        
        memset(vis, 0, sizeof(vis));
        int ct=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' and vis[i][j]==0)
                {
                    dfs(i, j, grid);
                    ct++;
                }
            }
        }
        return ct;
    }
};