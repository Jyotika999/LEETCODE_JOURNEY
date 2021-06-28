class Solution {
public:
    
    
     bool safe(int row, int col, vector<string>board, int n)
   {
       int r = row;
       int c = col;
       
       
       // checking if atttacked by upperleft to down right diagonal
       while(row>=0 and col>=0 )
       {
           if(board[row][col]=='Q')
               return false;
           
           col--;
           row--;
       }
       
       // checking if attacked by current row
       
       row = r;
       col = c;
       
       while(row>=0 and col>=0)
       {
           if(board[row][col]=='Q')
               return false;
           
           col--;
       }
       
       
       row=r;
       col=c;
       // checking if attacked by lower right diagonal
       while(row>=0 and col>=0 and row<n)
       {
           if(board[row][col]=='Q')
               return false;
           
           row++;
           col--;
       }
       
       return true;
       
   }
    void solve(int col, vector<string>board, vector<vector<string>>&ans, int n)
    {
        // base case 
        // inserted over all the columns 
        if(col>=n)
        {
            if(find(ans.begin(), ans.end(), board)== ans.end())
                ans.push_back(board);
            
            return;
        }
        
        for(int row=0; row<n; row++)
        {
            if(safe(row, col, board, n))
            {
                board[row][col]='Q';
                solve(col+1, board, ans, n);
                board[row][col]='.';
            }
        }
        
    }
    
    int totalNQueens(int n) {
        
        vector<string>board(n);
        
        string s ="";
        for(int i=0;i<n;i++)
            s+=".";
        
        for(int i=0;i<n;i++)
            board[i]=s;
        
        vector<vector<string>>ans;
        
        solve(0, board, ans, n);
        
        
        return ans.size();
        
    }
};