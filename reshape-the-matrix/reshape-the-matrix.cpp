class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>ans(r, vector<int>(c));
        
        if(r*c != n*m)
            return mat;
        
        int pro=n*m;
        
        for(int i=0;i<pro;i++)
        {
            ans[i/c][i%c] = mat[i/m][i%m];
        }
        
        return ans;
        
    }
};