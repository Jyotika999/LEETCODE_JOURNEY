class Solution {
public:
    
    int mini(int a, int b, int c)
    {
        return min(a, min(b,c));
    }
    int solve(int i, int j, vector<vector<char>>&matrix, vector<vector<int>>&dp)
    {
        // if(i<0 || j<0)
        //     return 0;
        
        if(i==0 || j==0)
        {
            return dp[i][j] = (matrix[i][j]-'0');
        }
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(matrix[i][j]=='1')
        {
            return dp[i][j] = mini(solve(i-1, j, matrix, dp), solve(i, j-1, matrix, dp), solve(i-1, j-1, matrix, dp)) +1   ;
        }
        else
        {
            // dp[i][j]=0;
           
            return dp[i][j]=0;
        }
    }
    int maximalSquare(vector<vector<char>>& matrix) {
       
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>>dp(n, vector<int>(m, -1));
        
        int kp = solve(n-1, m-1, matrix, dp);
        int maxlen=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(dp[i][j]==-1)
                {
                     solve(i, j, matrix, dp);
                    
                }
                maxlen = max(maxlen, dp[i][j]*dp[i][j]);
               
            }
            // cout<<"\n";
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        
        return maxlen;
    }
};