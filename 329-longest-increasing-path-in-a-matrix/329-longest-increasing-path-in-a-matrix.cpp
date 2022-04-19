class Solution {
public:
    
    int dx[4]={1, -1, 0, 0};
    int dy[4]={0, 0, 1, -1};
    int dp[505][505];
    
    int solve(int i, int j, vector<vector<int>>&matrix, int &n, int &m)
    {
        if( i<0 || j<0 || i>=n || j>=m )
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int maxi=1;
        for(int k=0;k<4;k++)
        {
            int xx = i + dx[k];
            int yy = j + dy[k];
            
            if(xx>=0 and yy>=0 and xx<n and yy<m and (matrix[xx][yy]>matrix[i][j]))
            {
                // if(dp[xx][yy]!=-1)
                //     maxi = max(maxi, dp[xx][yy]);
                // else
                maxi = max(maxi, 1+solve(xx, yy, matrix, n, m));
            }
        }
        
        return dp[i][j]=maxi;

    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        // vector<vector<int>>dp(n, vector<int>(m, -1));
        memset(dp, -1, sizeof(dp));
        // solve(0, 0, matrix, n, m, dp);
        
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[i][j]==-1)
                maxi = max(maxi, solve(i, j, matrix, n, m));
            }
        }
        return maxi;
    }
};