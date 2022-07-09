class Solution {
public:
    
    int findparent(int node, vector<int>&parent)
    {
        if(node == parent[node])
            return node;
        
        return parent[node] = findparent(parent[node], parent);
        
    }
    void unionn(int u, int v, vector<int>&rank, vector<int>&parent)
    {
        u = findparent(u, parent);
        v = findparent(v, parent);
        
        if(u!=v)
        {
            if(rank[u]<rank[v])
            {
                parent[u]=v;
            }
            else if(rank[v]<rank[u])
            {
                parent[v]=u;
            }
            else
            {
                parent[v]=u;
                rank[u]++;
            }
        }
        
    }
    
    void makeset(vector<int>&parent, vector<int>&rank, int n)
    {
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
            rank[i]=0;
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
    // why should i connect those nodes, which are already in the same component ?
        
        vector<int>redundant;
        
        int total_edges = edges.size();
        vector<int>parent(1005);
        vector<int>rank(1005);
        
        makeset(parent, rank, total_edges);
        for(int i=0;i<total_edges;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            vector<int>temp;
            int pu = findparent(u, parent);
            int pv = findparent(v, parent);
            if(pu==pv)
            {
                temp.push_back(u);
                temp.push_back(v);
                redundant = temp;
            }
            else
            {
                unionn(u, v, rank, parent);
            }
            
        }
        
        
        return redundant;
        
    }
};