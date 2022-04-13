class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
     
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>ans(n, vector<int>(m, 0));
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int r1 = max(i-k, 0);
                int r2 = min(n-1, i+k);
                int c1 = max(j-k, 0);
                int c2 = min(j+k, m-1);
                  
                for(int r=r1;r<=r2;r++)
                {
                    for(int c=c1;c<=c2;c++)
                    {
                        ans[i][j]+=mat[r][c];
                    }
                }
                
            }
        }
        return ans;
    }
};