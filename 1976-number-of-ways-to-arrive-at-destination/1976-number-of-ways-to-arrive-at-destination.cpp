class Solution {
public:
    
    vector<pair<int,int>>graph[205];
    
    long long int countPaths(int n, vector<vector<int>>& roads) {
        
        long long int sz = roads.size();
        
        for(int i=0;i<sz;i++)
        {
            long long int u = roads[i][0];
           long long int v = roads[i][1];
           long long int w = roads[i][2];
            
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }
        
        vector<long long int>dis(n, 1e18);
        vector<long long int>ways(n, 0);
        ways[0]=1;
        
        priority_queue<pair<long long int,long long int>, vector<pair<long long int,long long int>>, greater<pair<long long int,long long int>>>pq;
        
        pq.push({0, 0});
        dis[0]=0;
        
        while(!pq.empty())
        {
            auto cur = pq.top();
            pq.pop();
            long long int curnode = cur.second;
            long long int curdis = cur.first;
            
//             if(dis[curnode] < curdis)
//                 continue;
            
            
            for(auto c : graph[curnode])
            {
                long long int child = c.first;
                long long int wt = c.second;
                
                if(dis[child] > wt + curdis)
                {
                    dis[child] = wt + curdis;
                    pq.push({dis[child], child});
                    ways[child]=ways[curnode];
                }
                else if(dis[child]==wt+curdis)
                {
                    ways[child] = (ways[child] + ways[curnode])%(1000000007);
                }
            }
            
        }
        
        
      return ways[n-1];
        
        
    }
};