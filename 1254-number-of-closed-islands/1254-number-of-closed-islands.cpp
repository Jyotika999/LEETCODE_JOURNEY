class Solution {
public:
    
int dx[4]={0, 0, 1, -1};
int dy[4]={1, -1, 0, 0};
    
void dfs(int i, int j, int &n, int &m, vector<vector<int>>&grid, vector<vector<int>>&vis)
{
        if(i<0 || j<0 || i>=n || j>=m)
            return;
        
        vis[i][j]=1;
        for(int k=0;k<4;k++)
        {
            int xx = i + dx[k];
            int yy = j + dy[k];
            if(xx>=0 and yy>=0 and xx<n and yy<m and vis[xx][yy]==0 and grid[xx][yy]==0)
            {
                dfs(xx, yy, n, m, grid, vis);
            }
        }
    }
    
    int closedIsland(vector<vector<int>>& grid) {
       
        int n = grid.size();
        int m = grid[0].size();
        
        int islands=0;
        
        vector<vector<int>>vis(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0 || j==0 || i==n-1 || j==m-1)and grid[i][j]==0)
                {
                    cout<<"border"<<" "<<i<<" "<<j<<"\n";
                    dfs(i, j, n, m, grid, vis);
                }
               
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 if(vis[i][j]==0 and grid[i][j]==0)
                {
                    cout<<i<<" "<<j<<"\n";
                    dfs(i, j, n, m, grid, vis);
                    islands++;
                }
            }
        }
        
        
        return islands;
    }
};