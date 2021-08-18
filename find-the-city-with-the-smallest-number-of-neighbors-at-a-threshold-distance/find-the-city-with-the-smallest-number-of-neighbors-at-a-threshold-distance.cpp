class Solution {
public:
  
    
    int findTheCity(int n, vector<vector<int>>& edges, int d) {
        
        int n_edges = edges.size();
       // long long int dis[n+1][n+1];
        vector<vector<int>>dis(n+1, vector<int>(n+1, INT_MAX/2));
      //  memset(dis, INT_MAX, sizeof(dis));
        
        //  MAKE GRAPH
        for(int i=0;i<n_edges;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            // graph[u].push_back({v, wt});
            // graph[v].push_back({u, wt});
            
            dis[u][v] = wt;
            dis[v][u] = wt;
        }
        
        
        for(int i=0;i<n;i++)
            dis[i][i]=0;
        
        // APPLY FLOYD WARSHALL ALGORITHM
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(dis[i][j] > dis[i][k] + dis[k][j])
                    {
                        dis[i][j] = dis[i][k] + dis[k][j];
                        dis[j][i] = dis[i][k] + dis[k][j];
                    }
                }
            }
        }
        
        
        int city=-1;
        int ct=INT_MAX;
      //  cout<<d<<"\n";
        for(int i=0;i<n;i++)
        {
            int t=0;
           // cout<<"City "<<i<<" connected to ";
            for(int j=0;j<n;j++)
            {
             cout<<dis[i][j]<<" ";
                if(dis[i][j]<= d)
                {
                   // cout<<j<<" ";
                    t++;
                }
                
            }
            cout<<"\n";
            if(t<ct || (ct==t and i>city))
            {
                city= i;
                ct = t;
            }
        }
        
        
        return city;
    }
};