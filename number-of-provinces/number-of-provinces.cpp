class Solution {
public:
    
    // if there exists an edge between two nodes, 
    // we will merge them
    
    int parent[2000];
    int rank[2000];
    
    int find_parent(int node)
    {
        if(node == parent[node])
            return node;
        
        return parent[node] = find_parent( parent[node]);
    }
    void union_by_rank(int a, int b)
    {
        a = find_parent(a);
        b = find_parent(b);
        
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
            parent[b] =a;
            rank[a]++;
        }
        return;
    }
    
    
    int findCircleNum(vector<vector<int>>& grid) {
        
      
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
            rank[i]=0;
        }
        
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    // union i and j 
                    union_by_rank(i, j);
                }
            }
        }
        
        int component=0;
        for(int i=0;i<n;i++)
        {
            if(parent[i]==i)
                component++;
        }
        return component;
    }
};