class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        vector<int>ans;
        
        for(int s=0;s<=(n+m-2);s++)
        {
            for(int x=0;x<=s; x++)
            {
                int i  = x;
                int j = s - x;
                
                if(s%2==0)
                {
                    swap(i,j);
                }
                if(i>=n || j>=m)continue;
                ans.push_back(mat[i][j]);
            }
        }
       
        return ans;
        
        
    }
};


