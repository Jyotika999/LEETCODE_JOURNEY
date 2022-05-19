class Solution {
public:
    
    int dx[4]={1, -1, 0, 0};
    int dy[4]={0, 0, 1, -1};
    
    int solve(int i, int j, int n, int m, vector<vector<int>>&matrix, vector<vector<int>>&dp)
    {
        if(i<0 || j<0 || i>=n || j>=m)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        dp[i][j]=1;
        for(int k=0;k<4;k++)
        {
            int xx = i + dx[k];
            int yy = j + dy[k];
            
            if(xx>=0 and yy>=0 and xx<n and yy<m and (matrix[xx][yy]>matrix[i][j]))
            {
                    dp[i][j] = max(dp[i][j], 1+ solve(xx, yy, n, m, matrix, dp));              
            }
        }
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>>dp(n+5, vector<int>(m+5, -1));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[i][j]==-1)
                    dp[i][j] = max(dp[i][j], solve(i, j, n, m, matrix, dp));
            }
        }
        
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<dp[i][j]<<" ";
                maxi = max(maxi, dp[i][j]);
            }
            cout<<"\n";
        }
        
        return maxi;
        
    }
};