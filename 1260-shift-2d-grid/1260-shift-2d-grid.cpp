class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>>newgrid(n, vector<int>(m));
        
        while(k--)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j==m-1 and i!=n-1)
                {
                    newgrid[i+1][0] =  grid[i][j];
                }
                else if(j==m-1 and i==n-1)
                {
                    newgrid[0][0] = grid[n-1][m-1];
                }
                else
                {
                    newgrid[i][j+1] = grid[i][j];
                }
            }    
        }
        
        grid = newgrid;
        }
        
        return grid;
        
    }
};