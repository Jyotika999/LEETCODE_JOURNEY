// TIME COMPLEXITY : O(N*M)
// SPACE : O(N*M)



class Solution {
public:
    
    int n,m;
    
    
    int vis[55][55];
    int dx[4]={0, 1, 0, -1};
    int dy[4]={1, 0, -1, 0};
    int count=0;
    bool invalid(int x, int y)
    {
        return (x<0 || y<0 || x>=n || y>=m);
    }
    
    void  solve(int x, int y, vector<vector<int>>& grid)
    {
        
        vis[x][y]=1;
        count++;
        for(int i=0;i<4;i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            
            if(!invalid(xx, yy))
            {
                  if((vis[xx][yy]==0)  && (grid[xx][yy]==1))
                    {
                        solve(xx, yy, grid);
                      //  count++;
                    }
            }
          
        }
        
     
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
         n = grid.size();
         m = grid[0].size();
        
        memset(vis, 0, sizeof(vis));
        int maxi =0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                    if(grid[i][j]==1)
                    {
                            solve(i, j, grid);
                            maxi = max( maxi, count);
                            memset(vis, 0, sizeof(vis));
                            count=0;
                    }
                  
            }
        }
        
        return maxi;
     
        
    }
};