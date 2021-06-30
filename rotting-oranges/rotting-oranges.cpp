class Solution {
public:
    
    bool valid(int i, int j, vector<vector<int>>&grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0)
            return false;
        
        if(grid[i][j]==1)
        grid[i][j]=2;
        
        return true;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
          vector<int> dir={-1,0,1,0,-1}; //used for finding all 4 adjacent coordinates
        
        
        // if the orange is rotten , then we will push the index of that orange index 
        
        queue<pair<int, int>>q;
        
        int fresh=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i, j});
                }
                if(grid[i][j]==1)
                    fresh++;
            }
        }
        
        int time=-1;
        while(!q.empty())
        {
            int sz = q.size();
         //   q.pop();
            while(sz--)
            {
                int x = q.front().first;
                int y = q.front().second;
                
                
                q.pop();
                
//                 if(valid(x+1, y, grid)) {q.push({x+1, y}); fresh--;}
//                 if(valid(x-1, y, grid)) {q.push({x-1, y}); fresh--;}
//                 if(valid(x, y+1, grid)) {q.push({x, y+1}); fresh--;}
//                 if(valid(x, y-1, grid)) {q.push({x, y-1}); fresh--;}
 
                
                for(int i=0;i<4;i++)
                {
                    int r=x+dir[i];
                    int c=y+dir[i+1];
                    if(r>=0 && r<n && c>=0 && c<m &&grid[r][c]==1)
                    {
                        grid[r][c]=2;
                        q.push({r,c});
                        fresh--; // decrement by 1 foreach fresh orange that now is rotten
                    }
                    
                }

            }
            time++;
        }
        
        
        
        if(fresh>0)
            return -1;
        
        if(time==-1)
            return 0;
        
        return time;
    }
};