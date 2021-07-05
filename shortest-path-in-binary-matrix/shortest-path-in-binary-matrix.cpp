class Solution {
public:
   int dx[8] = { -1, -1, -1,  0, 0,  1, 1, 1 };
   int dy[8] = { -1,  0,  1, -1, 1, -1, 0, 1 };
    
    bool valid(int i, int j, vector<vector<int>>&grid, int n, int m)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==1 )
            return false;
        else
            return true;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(grid[0][0]==1 or grid[n-1][m-1]==1)
            return -1;
        
        
        queue<pair<int,int>>q;
        q.push({0,0});
        int level[n][m];
        
        memset(level, -1, sizeof(level));
        
        level[0][0]=1;
        grid[0][0]=1;  // if marked 1 , this means that this cell is already visited and this could not be used again
        
        
        while(!q.empty())
        {
            auto cur = q.front();
            int x = cur.first;
            int y = cur.second;
            q.pop();
            
            if(x==n-1 and y==m-1)
                return level[x][y];
            
            for(int i=0;i<8;i++)
            {
                int x1 = x+ dx[i];
                int y1 = y+ dy[i];
               
                if(valid(x1, y1, grid, n , m))
                {
                    // cout<<x1<<" "<<y1<<"\n";
                    q.push({x1, y1});
                    grid[x1][y1]=1;
                    level[x1][y1] = level[x][y]+1;
                }
            }
        }
        
        return level[n-1][m-1];
       
    }
};