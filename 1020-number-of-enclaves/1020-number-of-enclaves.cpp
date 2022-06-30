class Solution {
public:
        
    int dx[4]={1, -1, 0, 0};
    int dy[4]={0, 0, 1, -1};
    
    void dfs(int i, int j, int n, int m, vector<vector<int>>&grid, vector<vector<int>>&vis)
    {
        vis[i][j]=1;
        
        for(int k=0;k<4;k++)
        {
            int xx = i + dx[k];
            int yy = j + dy[k];
            
            if(xx>=0 and yy>=0 and xx<n and yy<m and  grid[xx][yy]==1 and vis[xx][yy]==0)
            {
                dfs(xx, yy, n, m, grid, vis);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>>vis(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 and (i==0 || j==0 || i==n-1 || j==m-1) and grid[i][j]==1)
                {
                    dfs(i, j, n, m, grid, vis);
                }
            }
        }
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 and grid[i][j]==1)
                    count++;
            }
        }
        return count;
        
    }
};