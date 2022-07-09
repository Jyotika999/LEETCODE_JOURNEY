class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        // directed edge 
        int total_edges = times.size();
        vector<pair<int,int>>graph[n]; // {adjacent node, weight of edge}
        
        
        for(int i=0;i<total_edges;i++)
        {
            int  u = times[i][0];
            int v = times[i][1];
            int wt = times[i][2];
            u--, v--;
            graph[u].push_back({v, wt});
        }
        
        k--;
        vector<int>dis(n, INT_MAX);
        dis[k]=0;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        
        pq.push({0, k}); // {dis, node}
        
        int mini = INT_MIN;
        
        while(!pq.empty())
        {
            auto cur = pq.top();
            int curnode = cur.second;
            int curdis = cur.first;
            pq.pop();
            
            for(auto child : graph[curnode])
            {
                int adjacent_node = child.first;
                int adjacent_weight = child.second;
                
                if(curdis + adjacent_weight < dis[adjacent_node])
                {
                    dis[adjacent_node]  = curdis + adjacent_weight;
                    pq.push({dis[adjacent_node], adjacent_node});
                }
            }
            
            
        }
        
        
        for(int i=0;i<n;i++)
        {
            mini = max(mini, dis[i]);
        }
        
        
        if(mini == INT_MAX)
            return -1;
        else
            return mini;
        
        
        
        
        
        
        
        
        
        
    }
};