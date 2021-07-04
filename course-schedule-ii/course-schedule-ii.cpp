class Solution {
public:
//  3
// [[0,2],[1,2],[2,0]]

//      0->2
//      1->2
//      2->0
//      0, 1 -> 2
//      2 -> 0
  
//     numCourses = 4, prerequisites = [[1,0],[2,0],[3,1],[3,2]]
    
//     0 -> 1 
//     0 -> 2
//     1 -> 3
//     2 -> 3
        
//         0 -> 1 , 2 
//         1, 2 -> 3 
        
//         correct ordering can be 0, 1 , 2, 3
//         or 0, 2, 1 , 3 
    
    // a, b 
    // a -> b
    // order ki baat chlri h
    // pre requisite h
    // topological sort ka takda hint h
    
    
    vector<int>graph[2020];
    
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        
        vector<int>order;
        
        queue<int>q;
        
        int indegree[num];
        memset(indegree, 0, sizeof(indegree));
        
        int e = pre.size();
        
        for(int i=0; i<e; i++)
        {
            int u = pre[i][0];
            int v = pre[i][1];
            graph[u].push_back(v);
            
            indegree[v]++;
        }
        
        for(int i=0; i<num; i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            order.push_back(cur);
            
            for(auto child : graph[cur])
            {
                indegree[child]--;
                
                if(indegree[child]==0)
                    q.push(child);
            }
        }
        
        vector<int>temp;
        reverse(order.begin(), order.end());
        if(order.size()==num)
        return order;
        else
        return temp;
        
        
        
        
        
    }
};