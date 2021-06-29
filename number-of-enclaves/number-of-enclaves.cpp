class Solution {
public:
    
    // since we do not want to include those cells which are at the boundary 
    // or the ones which can come to the boundary 
    // hence we need to mark all such cellls as "-1" , which will depict that 
    // it is not present in the cell 
    
    
    // Algorithm:
    // for all the 1's which are at the border , apply dfs that is visiting all the 1's which are reachable from this boundary position
    
    // now you have marked all such cells
    // now again traverse the given matrix , and count the number of ones
    // this will define , the number of required enclaves
    
    
    void dfs(int i, int j, vector<vector<int>>&grid)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()|| grid[i][j]==0)
            return ;
        
        
        grid[i][j]=0;
        
       // marking the neighbouring also markes
        dfs(i, j+1, grid);
        dfs(i, j-1, grid);
        dfs(i+1, j, grid);
        dfs(i-1, j, grid);
        
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || i==n-1 || j==0 || j==m-1) //  if the current cell is boundary cell
                {
                    if(grid[i][j]==1)
                    dfs(i, j, grid);
                }
            }
        }
        
        int ans=0;
        // now counting the number of enclaves
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    ans++;
            }
        }
        return ans;
        
        
    }
};