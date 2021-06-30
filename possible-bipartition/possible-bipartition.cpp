class Solution {
public:
    
    int color[2050];
      vector<int>graph[2020];
    int ans = true;
    
//     void bfs(int node, int color[])
//     {
//         color[node]= 0;
        
//         queue<pair<int,int>>q;
//         q.push({node, 0});
        
//         while(!q.empty())
//         {
//             auto cur = q.front().first;
//             q.pop();
//             int cur_col = q.front().second;
//            // cout<<cur<<" "<<cur_col<<"\n";
            
            
//             for(auto child : graph[cur])
//             {
//                 if(color[child]==-1)
//                 {
//                     color[child] =  cur_col ^1;
//                     q.push({child, color[child]});
//                 }
//                 else if( color[child] == cur_col)
//                 { ans=false;return;}
//             }
//         }
//     }
    
    void dfs(int node, int c )
    {
        color[node]=c;
        
        for(auto child : graph[node])
        {
            if(color[child]==-1)
                dfs(child, c^1);
            else if(color[child]==c)
            {ans = false; return;}
        }
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislike) {
        
        for(int i=0;i<dislike.size();i++)
        {
            int u = dislike[i][0];
            int v = dislike[i][1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
      
       // int color[n+2];
        
        for(int i=1;i<=n;i++)
            color[i]=-1;
        
        
       for(int i=1;i<=n;i++)
       {
           if(color[i]==-1)
           {
                dfs(i, 0);
           }
       }
        
        return ans;
    }
};