class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        // vector<vector<int>>dp(n, vector<int>(m, 0));
        
        int ct=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // if(i==0 || j==0)
                // {
                //     dp[i][j]=matrix[i][j];
                // }
                // else
                if(i>0 and j>0)
                {
                    if(matrix[i][j]==1)
                    matrix[i][j] = min(matrix[i][j-1] , min(matrix[i-1][j], matrix[i-1][j-1]))+1;
                  
                }
                  ct+=matrix[i][j];
            }
        }
        return ct;
        
        
        
        
    }
};

// m*n matrix 
// input contains = 0/1
// count square submatrices 

// 0 1 1 1 

