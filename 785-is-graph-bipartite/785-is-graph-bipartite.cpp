class Solution {
public:
    
    // vector<int>graph[105];
    bool dfs(vector<vector<int>>&graph, int node, vector<int>&vis, vector<int>&color, int c )
    {
        // if(vis[node]==1)
            // return true;
        
        color[node]=c;
        vis[node]=1;
        bool ans = true;
        for(auto child : graph[node])
        {
            if(vis[child]==0)
            {
                ans = ans and dfs(graph, child, vis, color, c^1);
            }
            else
            {
                if(color[child]==c)
                    return false;
            }
        }
        
        return ans;
    }
    bool isBipartite(vector<vector<int>>& graph) {
     
        int n = graph.size();
//         for(int i=0;i<n;i++)
//         {
//             int u = g[i][0];
//             int v = g[i][1];
            
//             graph[u].push_back(v);
//             graph[v].push_back(u);
//         }
        
        vector<int>color(n+5, -1);
        vector<int>vis(n+5, 0);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
               if(dfs(graph, i, vis, color, 0))
                   continue;
                else
                    return false;
            }
           
        }
        
        return true;
        
    }
};