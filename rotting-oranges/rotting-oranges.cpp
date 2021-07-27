class Solution {
public:
        int dx[4]={1, 0, 0, -1};
        int dy[4]={0, 1, -1, 0};
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int,int>>q;
        
        int m = grid.size();
        int n = grid[0].size();
        int fresh=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                if(grid[i][j]==1)
                    fresh++;
            }
        }
        
        int time = -1;
        
        if(fresh==0)
            return 0;
        
        while(!q.empty())
        {
            int sz = q.size();
            
            for(int i=1;i<=sz;i++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                for(int j=0;j<4;j++)
                {
                    int xx = x + dx[j];
                    int yy = y + dy[j];
                    if(xx>=0 and xx<m and yy>=0 and yy<n and  grid[xx][yy]==1)
                    {
                        grid[xx][yy]=2;
                        q.push({xx, yy});
                        fresh--;
                    }
                }
            
            }
            time++;
        }
        
        
        if(fresh==0)
            return time;
        else
            return -1;
        
        
    }
};