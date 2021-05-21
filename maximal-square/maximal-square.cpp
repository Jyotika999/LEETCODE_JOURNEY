class Solution {
public:
    
    int mini(int a, int b, int c)
    {
        return min(a, min(b,c));
    }
   
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
       int dp[n][m];
           int maxi =0;
      
        for(int i=0;i<n;i++)
        { dp[i][0] = matrix[i][0]-48;
            maxi = max( maxi, dp[i][0]);}
         
        for(int i=0;i<m;i++)
        {  dp[0][i] = matrix[0][i]-48;
         maxi = max(maxi, dp[0][i]);}
        
       
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]=='1')
                dp[i][j] = mini(dp[i-1][j] , dp[i][j-1] , dp[i-1][j-1])+1;
                else
                dp[i][j]=0;
                maxi = max( maxi, dp[i][j]);
            }
        }
        return maxi*maxi;
    }
};