class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int n = heights.size();
        int m = heights[0].size();
        
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>>pq;
        pq.push({0, 0, 0});
        int vis[n+5][m+5];
        memset(vis, 0, sizeof(vis));
        
        while(!pq.empty())
        {
            auto cur = pq.top();
            int cost = get<0>(cur);
            int x = get<1>(cur);
            int y = get<2>(cur);
            
            pq.pop();
            if(x==n-1 and y==m-1)
                return cost;
            if(vis[x][y]==1)
                continue;
            
            vis[x][y]=1;
            
            if(x-1>=0 and vis[x-1][y]==0)
            {
                int cur = abs(heights[x][y]-heights[x-1][y]);
                pq.push({max(cost, cur), x-1, y});
            }
            if(y-1>=0 and vis[x][y-1]==0)
            {
                 int cur = abs(heights[x][y]-heights[x][y-1]);
                pq.push({max(cost, cur), x, y-1});
            }
            if(x+1<n and vis[x+1][y]==0)
            {
                 int cur = abs(heights[x][y]-heights[x+1][y]);
                pq.push({max(cost, cur), x+1, y});
            }
            if(y+1<m and vis[x][y+1]==0)
            {
                 int cur = abs(heights[x][y]-heights[x][y+1]);
                pq.push({max(cost, cur), x, y+1});
            }
        }
        
        return 0;
        
        
        
    }
};