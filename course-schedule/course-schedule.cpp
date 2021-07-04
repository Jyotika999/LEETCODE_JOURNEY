class Solution {
public:
    
    // pre requisite 
    //  b -> a
    // directed graph 
    
    
    vector<int>graph[100001];
    
    bool canFinish(int num, vector<vector<int>>& pre) {
        
        int e = pre.size();
        int indegree[num];
        memset(indegree, 0, sizeof(indegree));
        queue<int>q;
        
        for(int i=0;i<e;i++)
        {
            int u = pre[i][0];
            int v = pre[i][1];
           // v->u 
            graph[v].push_back(u);
            indegree[u]++;
        }
        for(int i=0;i<num; i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            for(auto child : graph[cur])
            {
                indegree[child]--;
                
                if(indegree[child]==0)
                {
                    q.push(child);
                }
            }
        }
        
        for(int i=0;i<num;i++)
        {
            if(indegree[i]==0)
                continue;
            else
                return false;
        }
        
        return true;
    }
};