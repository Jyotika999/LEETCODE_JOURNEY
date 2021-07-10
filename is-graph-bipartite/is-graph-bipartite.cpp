class Solution {
public:
    
    bool ans=true;
    int color[105];
    bool vis[105];
    
    void dfs(int node, int c, vector<vector<int>>& graph)
    {
        vis[node]=1;
        color[node]=c;
        
        for(auto child : graph[node])
        {
            if(vis[child]==false)
            {
                dfs(child, c^1, graph);
            }
            else
            {
                if(color[child]==c)
                    ans=false;
            }
        }
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        memset(color, -1 , sizeof(color));
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
               dfs(i, 0, graph);
        }
     
        
        return ans;
        
        
    }
};