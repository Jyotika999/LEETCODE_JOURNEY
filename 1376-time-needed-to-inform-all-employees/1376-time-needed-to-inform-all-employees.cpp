class Solution {
public:
    
    int dfs(int root, vector<vector<pair<int,int>>>&graph, vector<int>&informtime, vector<int>&vis, int &maxtime)
    {
        
        vis[root]=1;
        int tm=0;
        
        for(auto c : graph[root])
        {
            auto child = c.first;
            int wt = c.second;
            if(!vis[child])
            {
                tm=max(tm,  wt+dfs(child, graph, informtime, vis, maxtime));
            }
        }
        maxtime = max(maxtime, tm);
        // cout<<root<<" "<<tm<<"\n";
        return tm;
        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informtime) {
        
        int root=0;
        int total_managers  = manager.size();
        vector<vector<pair<int,int>>>graph(total_managers);
        
        vector<int>vis(total_managers, 0);
        
        for(int i=0;i<total_managers ; i++)
        {
           int u = i;
           int v = manager[i];
            
           if(v!=-1)
           {
               graph[v].push_back({u, informtime[v]});
           }
        }
        int maxtime=0;
        dfs(headID, graph, informtime,vis, maxtime);
     
        return maxtime;
        
    }
};