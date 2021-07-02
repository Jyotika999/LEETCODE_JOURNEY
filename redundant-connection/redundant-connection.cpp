class Solution {
public:
    int parent[1005];
    int rank[1005];
    
    
    int find_parent(int node)
    {
        if(node == parent[node])
            return node;
        
        return parent[node] = find_parent(parent[node]);
    }
    bool union_by_rank(int a, int b)
    {
        a = find_parent(a);
        b = find_parent(b);
        
        if(a==b)
            return true;
        if(rank[a] < rank[b])
        {
            parent[a] =b;
        }
        else if(rank[a] > rank[b])
        {
            parent[b] =a;
        }
        else
        {
            parent[a] =b;
            rank[a]++;
        }
        
        return false;
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        vector<int>res;
        
        int n = edges.size();
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
            rank[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            
           if(union_by_rank(u, v))
           {
               res.push_back(u);
               res.push_back(v);
           }
        }
        
        
        return res;
        
    }
};