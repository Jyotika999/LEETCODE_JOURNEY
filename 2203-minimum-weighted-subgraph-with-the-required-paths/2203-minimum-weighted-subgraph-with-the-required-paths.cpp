class Solution {
public:
  
    vector<long long> dijekstra(long long src, vector<vector<pair<long long,long long>>>&graph, long long n)
    {
        vector<long long>dis(n, 1e17);
        
        // for(long long i=0;i<n;i++)
        // {
        //     dis[i]=1e17;
        // }
        // pq contains ppair of {distance, node}
        priority_queue<pair<long long,long long>, vector<pair<long long, long long>>, greater<pair<long long,long long>>>pq;
        pq.push({0, src});
        dis[src]=0;
        
        while(!pq.empty())
        {
            auto curdis = pq.top().first;
            auto curnode = pq.top().second;
            pq.pop();
            
            if(curdis > dis[curnode])
                continue;
            
            for(auto c : graph[curnode])
            {
                long long child = c.first;
                long long wt  = c.second;
                
                if(curdis + wt < dis[child])
                {
                    dis[child]= curdis + wt;
                    pq.push({dis[child], child});
                }
            }
            
        }
        return dis;
    }
    long long minimumWeight(int n, vector<vector<int>>& edges, int src1, int src2, int dest) {
        
        vector<vector<pair<long long,long long>>>graph(n);
        vector<vector<pair<long long,long long>>>reverse_graph(n);
        
        for(long long i=0;i<edges.size();i++)
        {

            long long u = edges[i][0];
            long long v = edges[i][1];
            long long wt = edges[i][2];
            graph[u].push_back({v, wt});
            reverse_graph[v].push_back({u, wt});
        }
        
         vector<long long>distance1 = dijekstra(src1, graph, n);
         vector<long long>distance2 = dijekstra(src2, graph, n);
         vector<long long>distance3 = dijekstra(dest, reverse_graph, n);
        
        long long mini = 1e17;
        for(int i=0;i<n;i++)
        {
            if(distance1[i]!=1e18 and distance2[i]!=1e18  and distance3[i]!=1e18)
            mini = min(mini, distance1[i]+ distance2[i]+distance3[i]);
        }
        
        // not possible case 
        if(mini==1e17)
            return -1;
        
        return mini;
        
        
        
    }
};