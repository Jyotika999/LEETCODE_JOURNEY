
// probbality of failure = 1 - probability of success 
// finding maximum probabilty of success = finding minimum probability of failure 

// source to destination
// single source path
// dijekstra --> perfect



class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        int num_edges = edges.size();
        vector<pair<int, double>>graph[10005];
        double prob[n+5];
        int vis[n+5];
        
        
        for(int i=0;i<=n;i++)
        {    prob[i]=0;
             vis[i]=0;
        }
        
        for(int i=0;i<num_edges; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            double p = succProb[i];
           // double f = 1.0 -p;
            
            graph[u].push_back({v,p});
            graph[v].push_back({u,p});
        }
        
       // min heap of pair of node and distance 
        // priority_queue< pair<int, double> , vector<pair<int, double>> , greater<pair<int, double>>>pq;
        
        priority_queue<pair< double, int>>pq;  // max heap
        
        pq.push({1.0, start});
        
        
        
        prob[start]=1.0;
       
        while(!pq.empty())
        {
            auto cur = pq.top();
            int cur_node = cur.second;
            double cur_dis = cur.first;
               pq.pop();
            
            if(vis[cur_node]==1)
                continue;
           
            vis[cur_node]=1;
            
            for(auto child : graph[cur_node])
            {
                if(vis[ child.first]==0)
                {
                     if((cur_dis * (child.second)) > prob[child.first] )
                    {
                        cout<< child.second<<" "<< (cur_dis * child.second) <<" "<< prob[child.first]<<"\n";
                        prob[ child.first ] = cur_dis * child.second;
                        pq.push({ prob[child.first] , child.first});

                    }
                }
                
               
            }
        }
        
        if(prob[end]==INT_MAX)
            return -1;
        
        return prob[end];
        
        
        
        
    }
};