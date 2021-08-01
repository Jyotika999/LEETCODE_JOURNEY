class Solution {
public:
    
    
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {-1, 1, 0, 0};
    
    
    void dfs(vector<vector<int>>&heights, int i, int j, int prev,  vector<vector<int>>&ocean)
    {
        
        
        if(i<0 || i>=heights.size() || j<0 || j>=heights[0].size())
            return;
        
        if(heights[i][j] < prev || ocean[i][j])
            return;
        
        ocean[i][j] = true;
        
        for(int d=0;d<4;d++)
        {
            dfs(heights, i + dx[d], j + dy[d] , heights[i][j] , ocean);
        }
        
        
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        vector<vector<int>>ans;
        
        int n = heights.size();
        int m = heights[0].size();
        
        vector<vector<int>> pacific(n, vector<int>(m));
        vector<vector<int>> atlantic(n, vector<int>(m));
        
//         memset( pacific, 0, sizeof(pacific));
//         memset( atlantic, 0, sizeof(atlantic));
        
        for(int i=0; i<m; i++)
        {
            dfs(heights, 0, i ,INT_MIN,  pacific );  // first row k sare elements 
            dfs(heights, n-1, i,INT_MIN, atlantic); // last row k sare elements
            
        }
        
        for(int j=0; j<n; j++)
        {
            dfs(heights, j, m-1,INT_MIN, atlantic);  // last column k sare elements
            dfs(heights, j, 0,INT_MIN,  pacific);  // first column  k sare elements
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(pacific[i][j]  and atlantic[i][j])
                {
                    ans.push_back({i, j});
                }
            }
        }
        
        return ans;
        
    }
};