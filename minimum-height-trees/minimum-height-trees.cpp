class Solution {
public:
   
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        
        queue<int>q;
         vector<vector<int>> graph(n);
        int total_edges=edges.size();
         // vector<int>graph[n];
        int degree[n+3];
        memset(degree, 0, sizeof(degree));
        
        for(int i=0;i<total_edges;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
            
            degree[u]++;
            degree[v]++;
        }
        
        for(int i=0;i<=n;i++)
        {
            if(degree[i]==1)
            {
                q.push(i);
                degree[i]--;
            }
        }
//         // vector<int>ans;
         while(!q.empty()){
            int s = q.size();
            ans.clear();
            for(int i=0; i<s;i++){
                int curr = q.front(); q.pop();
                ans.push_back(curr);
                for(auto child : graph[curr]){ //For each node, attached to the leaf niodes, we decrement the indegree i.e remove the leaf nodes connected to them. We keep on doing this until we reach the middle nodes.
                    degree[child]--;
                    if(degree[child]==1) q.push(child);   
                }
            }
        }
        if(n==1) ans.push_back(0); //If there is only 1 node in the graph, the min height is 0, with root being '0'
        return ans;
    }
};