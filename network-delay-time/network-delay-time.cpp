class Solution {
public:
    vector<pair<int,int>>graph[105];
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       
    int dis[n+2];
    int edges = times.size();
   // memset(dis, INT_MAX, sizeof(dis));
        
    for(int i=0; i< edges; i++)
    {
        int u = times[i][0];
        int v = times[i][1];
        int wt = times[i][2];
        
        graph[u].push_back({v, wt});
       // graph[v].push_back({u, wt});
    }
        
        for(int i=1;i<=n;i++)
        {
            dis[i] = INT_MAX;
        }
        
    // min heap created of distance and node 
        priority_queue< pair<int, int>, vector<pair<int, int>> , greater<pair<int, int>>>pq;
        
        pq.push({0, k});
        dis[k]={0};
        
        while(!pq.empty())
        {
            int curdis = pq.top().first;
            int curnode = pq.top().second;
            pq.pop();
            
            for(auto c : graph[curnode])
            {
                int child = c.first;
                int edgedis = c.second;
                if(edgedis + curdis < dis[child])
                {
                    dis[child] = edgedis  + curdis;
                    pq.push({dis[child], child});
                }
            }
        }
        
        int time=0;
        for(int i=1;i<=n;i++)
        {
            // cout<<i<<" "<<dis[i]<<"\n";
            // if(dis[i]!=INT_MAX)
                time = max(time, dis[i]);
        }
    
        if(time==INT_MAX)
            return -1;
        
        return time;
        
        
        
    }
};