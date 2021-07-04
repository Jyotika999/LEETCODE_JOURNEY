class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        // generating prefix sum of all possible subrectangles 
        // then finding sum of a particular subrectangle 
        
        int presum[n+2][m+2];
        memset(presum, 0, sizeof(presum));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                presum[i][j] = presum[i-1][j] + presum[i][j-1] - presum[i-1][j-1] + matrix[i-1][j-1];
            }
        }
        
        int maxi = INT_MIN;
        // now finding the sum of all possible subrectangles
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                for(int sr=0;sr<i;sr++)
                {
                    for(int sc=0;sc<j;sc++)
                    {
                        int sum = presum[i][j] - presum[i][sc] - presum[sr][j] + presum[sr][sc];
                        
                        if(sum > maxi and sum<=k)
                            maxi  = sum;
                    }
                }
            }
        }
        
        return maxi;
        
    }
};