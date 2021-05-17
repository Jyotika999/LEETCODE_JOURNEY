class Solution {
public:
    
    int ans[55][55][55][55];
    
    int solve(int r1, int c1, int r2, int c2, vector<vector<int>>&grid, int n)
    {
        if(r1>=n || c1>=n || r2>=n || c2>=n || grid[r1][c1]==-1 || grid[r2][c2]== -1) return INT_MIN;
        
        
       if(ans[r1][c1][r2][c2] !=-1)
           return ans[r1][c1][r2][c2];
        
        if(r1==n-1 && c1==n-1)
            return ans[r1][c1][r2][c2] = grid[r1][c1];
        
        int val = 0;
        
        val+= grid[r1][c1];
        
        if(r1!=r2 && c1!=c2)
        {
            val+= grid[r2][c2];
        }
        
        
        // DD, DR, RD, RR
        int temp1 = max( solve(r1, c1+1, r2, c2+1, grid, n) , solve(r1+1, c1, r2+1, c2, grid, n));
        
        int temp2 = max( solve(r1+1, c1, r2, c2+1, grid, n) , solve(r1, c1+1, r2+1, c2, grid, n));
        
        return ans[r1][c1][r2][c2] = val  + max(temp1, temp2);
        
        
    }
    
    
    int cherryPickup(vector<vector<int>>& grid) {
        
        
        memset(ans, -1, sizeof(ans));
        int n = grid.size();
        
        return max(0, solve(0, 0, 0, 0, grid, n));
        
    }
};