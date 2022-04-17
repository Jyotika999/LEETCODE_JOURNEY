class Solution {
public:
    
    int mini(int a, int b, int c)
    {
        return min(a, min(b,c));
    }
    
    int solve(int i, int j, vector<vector<int>>&matrix, vector<vector<int>>&dp, int n, int m)
    {

        if(j<0 || j>=m || i>=n)
            return INT_MAX;
        
        if(i==n-1)
        {
            return dp[i][j]=matrix[i][j];
        }
        
        if(dp[i][j]!=INT_MAX)
            return dp[i][j];
        
        int down = solve(i+1, j, matrix, dp, n, m) ;
        int right_diag = solve(i+1, j+1, matrix, dp, n, m);
        int left_diag = solve(i+1, j-1, matrix, dp, n, m);
        int res = mini(down, left_diag, right_diag);
        
        dp[i][j] = matrix[i][j] + (res ==INT_MAX ? 0 : res);
        return dp[i][j];
      
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = INT_MAX;
        vector<vector<int>>dp(n, vector<int>(m, INT_MAX));
        
        for(int i=0;i<m;i++)
        {
               
                ans = min(ans, solve(0, i, matrix, dp, n, m));
                
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cout<<dp[i][j]<<" ";
            cout<<"\n";
        }
        
        return ans;
    }
};