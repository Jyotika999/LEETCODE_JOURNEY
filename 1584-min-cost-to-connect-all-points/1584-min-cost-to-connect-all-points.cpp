
struct edge{
public:
    int u, v, wt;
    
    edge(int f, int s, int w)
    {
        u = f;
        v = s;
        wt = w;
    }
};

bool cmp(edge &a, edge &b)
{
    return a.wt<b.wt;
}
class Solution {
public:
    
    
    // minimum spanning tree bnana hai
    // only one node connected once
    // every node gets visited once
    // all the nodes should be reachable
    // there will be exactly n-1 edges
    // then we need to find out the minimum cost of such a spanning tree formed
    
    int findparent(int u, vector<int>&parent)
    {
        if(u== parent[u])
            return u;
        
        return parent[u] = findparent(parent[u], parent);
        
    }
    
    void unionn(int u, int v, vector<int>&parent, vector<int>&rank)
    {
        u = findparent(u, parent);
        v = findparent(v, parent);
        
        if(rank[u]<rank[v])
        {
            parent[u]=v;
        }
        else if(rank[u]>rank[v])
        {
            parent[v]=u;
        }
        else
        {
            parent[v]=u;
            rank[u]++;
        }
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int total_points = points.size();
        
        // vector<vector<pair<int,int>>>graph(total_points);
        vector<edge>totaledges; 
        
        for(int ptr1=0; ptr1<total_points; ptr1++)
        {
            for(int ptr2=ptr1+1; ptr2<total_points; ptr2++)
            {
                int x1 = points[ptr1][0];
                int y1 = points[ptr1][1];
                
                int x2 = points[ptr2][0];
                int y2 = points[ptr2][1];
                
                int dis = abs(x1-x2)+abs(y1-y2);
                
                // graph[ptr1].push_back(ptr2);
                // graph[ptr2].push_back(ptr1);
                
                totaledges.push_back({ptr1, ptr2, dis});
            }
        }
        
        sort(totaledges.begin(), totaledges.end(), cmp);
        vector<int>rank(total_points, 0);
        vector<int>parent(total_points, 0);
        
        for(int pt = 0; pt<total_points ; pt++)
        {
            parent[pt]=pt;
        }
        
        // vector<pair<int,int>>MST;
        
        int cost=0;
        
        for(auto it : totaledges)
        {
            int u = it.u;
            int v = it.v;
            int wt = it.wt;
            
            u = findparent(u, parent);
            v = findparent(v, parent);
            if(u!=v)
            {
                cost+=wt;
                // MST.push_back({u, v});
                unionn(it.u, it.v, parent, rank);
                
            }
            
        }
        
        return cost;
        
        
    }
};