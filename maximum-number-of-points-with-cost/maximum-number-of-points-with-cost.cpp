// https://www.youtube.com/watch?v=cz4ahNBHPrk&t=2781s

class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        
        long long n = points.size();
        long long m = points[0].size();
        long long res = INT_MIN;
        
        long long dp[n][m];
        memset(dp, -1, sizeof(dp));
        
        for(long long j=0;j<m;j++)
        {
            dp[0][j] = points[0][j];
        }
        
        
        for(long long i=1;i<n;i++)
        {
            
            long long left[m+1];
            long long right[m+1];
            
            left[0] = dp[i-1][0];
            for(long long j=1;j<m;j++)
            {
                left[j] = max(left[j-1] , dp[i-1][j] + j);
            }
            
            right[m-1]= dp[i-1][m-1] - (m-1);
            
            for(long long j=m-2;j>=0;j--)
            {
                right[j] = max(right[j+1], dp[i-1][j] - j);
            }
            
            for(long long j=0;j<m;j++)
            {
                dp[i][j] = max(left[j] - j , right[j] + j) + points[i][j];
            }
            
            
        }
        
        
        for(long long j=0;j<m;j++)
        {
            res = max(dp[n-1][j] , res);
        }
        
        return res;
    }
};