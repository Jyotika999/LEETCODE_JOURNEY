class Solution {
public:
    
    bool cyclic(int node, vector<vector<int>>&graph, int &n, vector<int>&vis, vector<int>&dfsvis)
    {
        vis[node]=1;
        dfsvis[node]=1;
        bool ans = true;
        for(auto child : graph[node])
        {
            if(vis[child]==0)
            {
                ans = ans and cyclic(child, graph, n, vis, dfsvis);
            }
            else 
            {
                if(dfsvis[child])
                    return false;
            }
        }
        dfsvis[node]=0;
        
        return ans;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        // prerequisites ki baat hori h 
        /// ordering matters
        // graph given hai
        // lets apply toposort 
        // toposort can only be applied in directed acyclic graph
        // hence hmein bus check krna h ki sare courses finish ho bhi payenge k nhi, 
        // toh bus yeh check krna h ki dag h ya nhi
        
        
        
        vector<vector<int>>graph(n);
        vector<int>indegree(n, 0);
        vector<int>vis(n, 0);
        vector<int>dfsvis(n, 0);
        
        for(int i=0;i<pre.size();i++)
        {
            int u = pre[i][0];
            int v = pre[i][1];
            
            // v->u 
            graph[v].push_back(u);
            indegree[u]++;
        }
        
        bool ans = true;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0);
                 ans = ans and cyclic(i, graph,n, vis, dfsvis);
                
        }
       return ans;
        
//         queue<int>q;
//         for(int i=0;i<n;i++)
//         {
//             if(indegree[i]==0)
//                 q.push(i);
//         }
        
//         while(!q.empty())
//         {
//             int cur = q.front();
//             q.pop();
            
//             for(auto child : graph[cur])
//             {
//                 indegree[child]--;
//                 if(indegree[child]==0)
//                     q.push(child);
//             }
//         }
        
        
        
        
    }
};