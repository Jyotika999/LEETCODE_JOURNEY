class Solution {
public:
    bool vis[105][105];
    
    
    // bool okay(int i, int j, int i1, int j1, vector<vector<int>>&edges, int k , int n , int m)
    // {
    //     if(i1<0 || j1<0 || i1>=n || j1>=m || abs(edges[i][j] - edges[i1][j1])>k || vis[i1][j1]==true)
    //         return false;
    //     else
    //         return true;
    // }
    
    bool valid(int i, int j, vector<vector<int>>&h, int k, int n, int m)
    {
        //base condition: 
        if(i==n-1 and j==m-1)
        {
            return true;
        }
        vis[i][j]=1;
        
        bool ans = false;
        
       if(i-1>=0 and vis[i-1][j]==false and abs(h[i][j] - h[i-1][j])<=k)
            ans = ans || valid(i-1, j, h, k, n, m);
        
        if(i+1<n and vis[i+1][j]==false and abs(h[i][j] - h[i+1][j])<=k)
            ans = ans || valid(i+1, j, h, k, n, m);
        
       if(j-1>=0 and vis[i][j-1]==false and abs(h[i][j] - h[i][j-1])<=k)
            ans= ans || valid(i, j-1, h , k, n, m);
        
       if(j+1<m and vis[i][j+1]==false and abs(h[i][j] - h[i][j+1])<=k)
            ans= ans || valid(i, j+1, h, k, n, m);

        return ans;
        
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int high = 1e6;
        int low = 0;
        int n = heights.size();
        int m = heights[0].size();
       
        int ans = INT_MAX;
        
        while(low<= high)
        {
            int mid = low+ (high-low)/2;
             memset(vis, 0, sizeof(vis));
            if(valid(0, 0, heights, mid, n , m))
            {
                ans = min(ans, mid);
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        
        return ans;
        
    }
};