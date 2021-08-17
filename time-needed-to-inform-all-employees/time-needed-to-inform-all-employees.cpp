class Solution {
public:
    vector<pair<int,int>>graph[100005];
    int vis[100005];
    int ans =0;
    void dfs(int node, int t)
    {
        vis[node]=1;
        cout<<t<<"\n";
        ans = max(ans, t);
        for(auto c : graph[node])
        {
            int child = c.first;
            int wt = c.second;
            if(vis[child]==0)
            {
                dfs(child, t+wt);
            }
        }
        
    }
    
    
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& time) {
        
        memset(vis, 0, sizeof(vis));
        
        for(int i=0;i<n;i++)
        {
            int u = i;
            int v = manager[i];
          
            if(v!=-1)
            {    
                  int wt = time[v];
                graph[u].push_back({v, wt});
                graph[v].push_back({u, wt});
            }
        }
        
        dfs(headID, 0);
        return ans;
        
        
        
    }
};