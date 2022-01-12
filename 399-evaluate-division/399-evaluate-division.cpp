class Solution {
public:
 
    void dfs(string u, string v, map<string, vector<pair<string, double>>>&graph, double &ans, map<string, int>&vis, double temp)
    {
        // double ans=0.0
            // cout<<ans<<"\n";
         // cout<<u<<" "<<temp<<" "<<ans<<"\n";
        if(u==v)
        {
            ans=temp;
            return;
        }
       
       
        vis[u]=1;
        
        
    
        for(auto child : graph[u])
        {
            if(!vis[child.first])
            {
                cout<<child.first<<" "<<child.second<<" ";
                // temp= temp* child.second;
                cout<<temp<<"\n";
                dfs(child.first, v, graph,ans, vis, temp*child.second);
                
            }
        }
        // return ans;
    }
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& val, vector<vector<string>>& q) {
        
        // graph 
        // if a/b = 2.0 , then we will make a directed weighted edge from a to b with weight = 2.0
        // if we need to store b/a also, then we will direct edge from b to a, with wirght = 1/2.0 = 0.5 
        vector<double>qans;
        map<string, vector<pair<string, double>>>graph;
        // if input is [["a", "b"]["a" , "c"]] , values = [2.0, 3.0]
        // graph["a"]= {{b, 2.0}, {c, 3.0}}
        
        int n = e.size();
        for(int i=0;i<n;i++)
        {
            vector<string>cur = e[i];
            string u = e[i][0];
            string v = e[i][1];
            double wt = val[i];
            
//              graph[e[i][0]].push_back({e[i][1],v[i]});//storing value for s->d
//             graph[e[i][1]].push_back({e[i][0],1/v[i]});//storing reciprocal value for d->s
            // cout<<u<<" "<<v<<" "<<wt<<" "<<v[i]<<"\n";
            graph[u].push_back({v, wt});
            graph[v].push_back({u, 1/wt});
        }
        
        int qn = q.size();
        
        for(int i=0;i<qn;i++)
        {
            string u = q[i][0];
            string v = q[i][1];
            
            double ans=-1.0;
            double temp=1.0;
           
            if(graph.find(u)!=graph.end() and graph.find(v)!=graph.end())
            {
                map<string, int>vis;
                
                dfs(u, v, graph, ans, vis, temp);
            }
           
                qans.push_back(ans);
        }
        
        return qans;
        
    }
};
