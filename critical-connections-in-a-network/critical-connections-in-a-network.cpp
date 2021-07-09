class Solution {
public:
    
    // undirected graph
    // we need to find bridges 
    // coz , when we remove bridges of a graph , the graph gets disconnected 
    // the number of components in the graph increase 
    
    
    vector<int>graph[100005];
    bool vis[100005];
    int intime[100005];
    int low[100005];
    int timer=0;
    vector<vector<int>>bridge;
    
    void dfs(int node, int parent)
    {
        vis[node]= true;
        intime[node] = low[node] = timer++;
        
        for(auto child : graph[node])
        {
            if(child == parent)
                continue;
            
            if(vis[child]==true)
            {
                low[node] = min(low[node], intime[child]);
            }
            else
            {
                dfs(child, node);
                low[node] = min(low[node], low[child]);
                
                if(low[child] > intime[node])
                {
                    bridge.push_back({child, node});
                }
            }
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        memset(vis, false, sizeof(vis));
        memset(intime, -1, sizeof(intime));
        memset(low, -1, sizeof(low));
        
        int e = connections.size();
        
        for(int i=0;i<e;i++)
        {
            int u = connections[i][0];
            int v = connections[i][1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        dfs(0, -1);
        return bridge;
        
        
    }
};