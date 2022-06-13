class Solution {
public:
    
    int dp[205][205];
    
    int solve(int i, int j, vector<vector<int>>&triangle, int &n)
    {
        if(i>=n)
            return 0;
        
        if(j>=triangle[i].size())
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        // either choose i th index, or choose i+1 th index
        
        int t1 = solve(i+1, j, triangle, n);
        int t2 = solve(i+1, j+1, triangle, n);
        
        return dp[i][j]= min(t1, t2)+triangle[i][j];
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        
        // if you are on index i , then we can move to ith row or (i+1)th row
        
        memset(dp, -1, sizeof(dp));
        
        // minimum path sum from top to bottom 
        return solve(0, 0, triangle, n);
        
        
        
        
        
    }
};


