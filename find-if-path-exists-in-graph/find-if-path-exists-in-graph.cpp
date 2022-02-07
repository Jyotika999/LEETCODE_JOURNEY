class Solution {
public:
vector<int>graph[200005];
int vis[200005];
    
    void dfs(int node)
    {
        vis[node]=1;
        
        for(auto child : graph[node])
        {
            if(vis[child]==0)
            {
                dfs(child);
            }
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        memset(vis, 0, sizeof(vis));
        
        int e = edges.size();
        for(int i=0;i<e;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        dfs(start);
        
        return vis[end];
    }
};