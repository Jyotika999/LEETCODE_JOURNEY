class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int row[15][15];
        int col[15][15];
        int sub[15][15];
        
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        memset(sub, 0, sizeof(sub));
        
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]!='.')
                {
                    int k = i / 3 * 3 + j / 3;
                    int cur =int( board[i][j] - '0') ;
                    if(row[i][cur] || col[j][cur] || sub[k][cur])
                    {
                        return false;
                    }
                    row[i][cur]=1;
                    col[j][cur]=1;
                    sub[k][cur]=1;
                }
                
            }
        }
        
        return true;
    }
};