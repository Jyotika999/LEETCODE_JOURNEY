class Solution {
public:
    
    int dp[500][500];
    
    int solve(int i, int j, vector<vector<int>>&triangle, int n, int m)
    {
        
        if(i<0 || j<0 || j>=triangle[i].size())
            return 1e9;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(i==0 and j==0)
            return dp[i][j]=triangle[i][j];
                

       
        // i th row , jth col 
        // jth col , i-1 row,
        // j-1th col, i-1 row 
        
        int same_col = solve(i-1, j, triangle, n, m);
        int prev_col = solve(i-1, j-1, triangle, n, m);
        
        return dp[i][j]=min(same_col, prev_col)+triangle[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        int m = triangle[n-1].size();
        int ans = INT_MAX;
        memset(dp, -1, sizeof(dp));
        
        for(int i=0;i<m;i++)
        {
            // triangle[n-1][i];
            ans = min(ans, solve(n-1, i, triangle, n, m));
        }
        return ans;
    }
};

// 2
// 3 4
// 6 5 7
// 4 1 8 3

    



