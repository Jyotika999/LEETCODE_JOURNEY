class Solution {
public:
    
    vector<int>graph[100005];
    
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        for(int i=0;i<roads.size();i++)
        {
            int u = roads[i][0];
            int v = roads[i][1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        int maxi=0;
        int vis[n];
        
        for(int i=0;i<n;i++)
        {
           
           
            for(int j=i+1;j<n;j++)
            {
                // making a pair of i and j 
                // visiting the adjacent directly connected nodes of i 
                // visiting the adjacent directly connected nodes of j
                 int ct=0;
                 ct = graph[i].size() + graph[j].size();
                 if(find(graph[i].begin(), graph[i].end(), j) != graph[i].end())
                    ct--;
                
                cout<<maxi<<" "<<ct<<" "<<i<<" "<<j<<"\n";
                maxi = max(maxi, ct);
            }
           
        }
        return maxi;
        
    }
};