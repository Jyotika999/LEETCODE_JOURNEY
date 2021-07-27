class Solution {
public:
    
    // nearest land cell distance should be maximised
    // o = water
    // 1 = land
    // find the water cell whose distance to nearest land cell is maximum
    // find such 0 cell whose distance from 1 cell is maximised
    
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    
    int maxDistance(vector<vector<int>>& grid) {
        
        // we will apply bfs from every 1 and simulatenouesly mark it as visited
        
        int n = grid.size();
        int m = grid[0].size();
        int dis[n][m];
        memset(dis, 0, sizeof(dis));
        int vis[n][m];
        memset(vis, 0, sizeof(vis));
        
        queue<pair<int,int>>q;
        int ct=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                    vis[i][j]=1;
                    dis[i][j]=0;
                }
                else
                    ct++;
            }
        }
        
        int maxdis=0;
        
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=1;i<=sz;i++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                for(int i=0;i<4;i++)
                {
                    int xx = x + dx[i];
                    int yy = y + dy[i];
                    
                    if(xx>=0 and xx<n and yy>=0 and yy<m and vis[xx][yy]==false)
                    {
                        dis[xx][yy] = dis[x][y]+1;
                        vis[xx][yy]=true;
                        q.push({xx, yy});
                    }
                }
               
            }
             maxdis++;
        }
        
     
        if(maxdis==0 || ct==0)
            return -1;
        else
            return maxdis-1;
        
    }
};