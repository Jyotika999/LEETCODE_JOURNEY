class Solution {
public:
    
    vector<int>graph[5050];
    int vis[100005];
    int dfsvis[100005];
    
    
    bool dfs(int node)
    {
        vis[node]=1;
        dfsvis[node]=1;
        cout<<node<<vis[node]<<" "<<dfsvis[node]<<"\n";
        
        for(auto child : graph[node])
        {
            if(vis[child]==0)
            {
                if(dfs(child))
                    return true;
            }
            // if already visited node, and now we need to check if that node is visited from the current dfs function call node 
            else if(dfsvis[child]==1)
            {
                return true;
            }
        }
        
        // backtracking step 
        dfsvis[node]=0;
        return false;
        
    }
    
    
    bool canFinish(int numCourses, vector<vector<int>>& courses) {
        
        memset(vis, 0, sizeof(vis));
        memset(dfsvis, 0, sizeof(dfsvis));
        
        int n = courses.size();
        
        for(int i=0;i<n;i++)
        {
            int u = courses[i][0];
            int v = courses[i][1];
            
            graph[u].push_back(v);
          //  graph[v].push_back(u);
        }
        bool cycle= false;
        
        
        for(int i=0;i<=numCourses;i++)
        {
            if(vis[i]==0)
            {
               // cout<<dfs(i)<<"\n";
                if(dfs(i))
                    cycle = true;
            }
        }
        
        return !(cycle);
        
    }
};