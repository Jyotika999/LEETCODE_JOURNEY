class Solution {
public:
    
    void makeset(vector<int>&parent, vector<int>&rank, int n)
    {
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
            rank[i]=0;
        }
    }
    
    int findparent(int i, vector<int>&parent)
    {
        if(i==parent[i])
            return i;
        return parent[i]= findparent(parent[i], parent);
    }
    void unionn(int i, int j, vector<int>&parent, vector<int>&rank)
    {
        i = findparent(i, parent);
        j = findparent(j, parent);
        
        if(i!=j)
        {
            if(rank[i]<rank[j])
            {
                parent[i]=j;
            }
            else if(rank[i]>rank[j])
            {
                parent[j]=i;
            }
            else
            {
                parent[j]=i;
                rank[i]++;
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        
        // vector<int>graph[n+1];
        vector<int>parent(n, 0);
        vector<int>rank(n, 0);
        
        makeset(parent, rank, n);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                // graph[i].push_back(j);
                // graph[j].push_back(i);
                if(isConnected[i][j]==1)
                unionn(i, j, parent, rank);
            }
        }
        
        int provinces=0;
        
        for(int i=0;i<n;i++)
        {
            if(parent[i]==i)
            {
                provinces++;
            }
        }
        
        return provinces;
    }
};

