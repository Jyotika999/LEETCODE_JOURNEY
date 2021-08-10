class Solution {
public:
    
    vector<vector<int>>ans;
    bool vis[20];
    
    void dfs(int src, int dest, vector<vector<int>>&graph, vector<int>temp)
    {
        vis[src]=1;
        temp.push_back(src);
        if(src==dest)
        {
            ans.push_back(temp);
            return;
        }
        
        for(auto child : graph[src])
        {
            // if(vis[child]==0)
            // {
              //  temp.push_back(child);
                dfs(child, dest, graph, temp);
               
           // }
        }
        vis[src]=0;
         temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int edges = graph.size();
        int dest = edges-1;
        
        memset(vis, false, sizeof(vis));
        
        vector<int>temp;
       
        dfs(0, dest, graph, temp);
        
        return ans;
        
    }
};