class Solution {
public:
    
    
    bool valid(int x, int y, int n, vector<string>&grid)
    {
        // no queen in same row
        for(int i=0;i<n;i++)
        {
            if(grid[x][i]=='Q' )
                return false;
        }
        
        // no queen in same column
        for(int i=0;i<n;i++)
        {
            if(grid[i][y]=='Q' )
                return false;
        }
        
        // no queen in same left diagonal
        int i = x;
        int j = y;
        while(i>=0 and j>=0)
        {
            // if(x!=i and y!=j)
            {
                if(grid[i][j]=='Q')
                    return false;
            }
            i--;
            j--;
        }
        
        i=x;
        j=y;
        while(i>=0 and j<n)
        {
            // if(x!=i and y!=j)
            {
                if(grid[i][j]=='Q')
                    return false;
            }
            i--;
            j++;
        }
        return true;
        
        // no queen in same right diagonal
        
        
    }
    void solve(int i, int n, vector<string>&grid, vector<vector<string>>&ans)
    {
        if(i>=n)
        {
            ans.push_back(grid);
            return ;
        }
        
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]=='.')
            {
              
                if(valid(i,j,  n, grid))
                {
                    // valid placing of queens
                    grid[i][j]='Q';
                     solve(i+1,  n, grid, ans);
                    grid[i][j]='.';
                    // cout<<i<<" "<<j<<"\n";
                    // return true;
                }
             
            }
        }
        // return false;
        // return true;
    }
    vector<vector<string>> solveNQueens(int n) {
        string s="";
        for(int i=0;i<n;i++)
            s+=".";
        
        vector<string>grid(n, s);
        vector<vector<string>>ans;
        
        solve(0, n, grid, ans);
        return ans;
        
    }
};