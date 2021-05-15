class Solution {
public:
    
    int dp[205][205];
    
    // ith level, jth number 
    int solve(int i, int j, int n, vector<vector<int>>&triangle)
    {
        if(i>=triangle.size())
           return 0;
        
        if(j>=triangle[i].size())
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        return dp[i][j] = triangle[i][j] + min( solve(i+1, j, n, triangle) , solve(i+1, j+1, n, triangle));
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n= triangle.size();
        
        memset(dp, -1, sizeof(dp));
        
        return solve(0, 0, n, triangle);
        
        
    }
};