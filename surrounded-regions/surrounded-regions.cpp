class Solution {
public:
    
    // all those cells which have  0 on the border , apply dfs , and mark them all * that is , they will remain the same
    
    // all the other 0's left now will be marked to X 
    
    // now mark all the * to O 
    
    void dfs(int i, int j, vector<vector<char>>& grid )
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!='O')
            return ;
        
        
        
        grid[i][j]='1';
        
        dfs(i+1, j, grid);
        dfs(i-1, j, grid);
        dfs(i, j+1, grid);
        dfs(i, j-1, grid);
        
        
        
    }
    
    void solve(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==m-1)
                {
                    if(grid[i][j]=='O')
                    {
                            dfs(i, j, grid);   // mark all of them as 1     
                     }
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='O')
                    grid[i][j]='X';
            }
        }
        
        
        // marking the '1' as O
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                    grid[i][j]='O';
            }
        }
        
        return;
        
    }
};