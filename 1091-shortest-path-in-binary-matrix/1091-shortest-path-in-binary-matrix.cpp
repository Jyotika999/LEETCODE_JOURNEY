class Solution {
public:
  
    int dx[8] = { -1, -1, -1,  0, 0,  1, 1, 1 };
    int dy[8] = { -1,  0,  1, -1, 1, -1, 0, 1 };
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int vis[n][m];
        
        queue<pair<int,int>>q;
        memset(vis, -1, sizeof(vis));
        if(grid[0][0]==0)
        {
        q.push({0, 0});
        vis[0][0]=1;}
      
        while(!q.empty())
        {
            
            auto tp = q.front();
            q.pop();
            int x = tp.first;
            int y = tp.second;
            
            for(int k=0;k<8;k++)
            {
                int xx = x+dx[k];
                int yy = y+dy[k];
                if(xx>=0 and yy>=0 and xx<n and yy<m and vis[xx][yy]==-1 and grid[xx][yy]==0)
                {
                    q.push({xx, yy});
                    vis[xx][yy]=vis[x][y]+1;
                }
            }
        }
        
        
        return vis[n-1][m-1];
    
        // 1 0  0
        // 1 1  0
        // 1 1  0
        
        
    }
};