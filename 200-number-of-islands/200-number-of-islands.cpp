class Solution {
public:
    
    int dx[4]={1, -1, 0, 0};
    int dy[4]={0, 0, 1, -1};
    
    void dfs(int i, int j, int n, int m, vector<vector<char>>&grid)
    {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0')
            return ;
        
        grid[i][j]='0';
        
        for(int k=0;k<4;k++)
        {
            int xx = i+dx[k];
            int yy = j+dy[k];
            dfs(xx, yy, n, m, grid);   
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int island=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i, j, n, m, grid);
                    island++;
                }
            }
        }
        return island;
    }
};