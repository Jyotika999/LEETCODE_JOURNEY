class Solution {
public:
    
    
//     most stones to be removed with same row or column
//     in a connected component , we can always remove all the stones except 1
//     moves in one component do not effect the other
//     each stone belongs to exactly one connected component
    
//     best data structure to use , incase of union find 
    
//     the number of stones to be removed = total stones - number of connected components
    
//     number of connected componnents?
//     let us think of brute force first inorder to make a union 
//     for(int i=0;i<n;i++)
//     {
//             for(int j=0;j<n;j++)
//             {
//                 if(samerow(i, j) or samecolumn(i,j))
//                 {
//                     union(i, j)
//                 }
//             }
//     }
    
    
//    but the overall time complexity of the above code will be (N^2)logN 
      
//      how to improve it ?
//     use a trick 
//     combine those which have same row or same column , create a group of them
    
//     for(int i=0;i<n;i++)
//         union(stones[i] , stones[j])
    
//     one more thing used is
//         since rows and columns have to be treated differenctly 
//         then creating of a pair of row or columns might create more complexity
        
//         hence we will try to trick here
//             consider all negative numbers as rows 
//             consider all posiitive numbers as columns 
//     now you might consider the case whwere we may have row 0 col 0 
//     but negative row 0 will become positive , right ?
//         so what start indexing from 1 :)

//     buut then take care that , for the possible rows, the rows are negative 
//     arrays will not be enough 
//     then you have to use map unordered map for the same
    
    
    
    
    
   unordered_map<int,int>parent;
   unordered_map<int,int>rank;
    
    
    int find_parent(int node)
    {
        if(node == parent[node])
            return node;
        
        return parent[node] = find_parent(parent[node]);
    }
    
    void unionn(int a, int b)
    {
        a = find_parent(a);
        b = find_parent(b);
        
        if(rank[a]<rank[b])
        {
            parent[b]=a;
        }
        if(rank[a]>rank[b])
        {
            parent[a]=b;
        }
        if(rank[a]==rank[b])
        {
            parent[a]=b;
            rank[a]++;
        }
    }
    
    
    int removeStones(vector<vector<int>>& stones) {
        
        int n = stones.size();
        

        
        for(int i=0;i<10005;i++)
        {
            parent[i]=i;
            parent[-1*i]=-1*i;
            rank[i*(-1)]=-1*i;
            rank[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            int row = -1*(stones[i][0]+1);
            int col = stones[i][1]+1;
            
            unionn(row, col);
        }
        
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int row = -1*(stones[i][0]+1);
            int col = stones[i][1]+1;
            
          cout<<row<<" "<<col<<" ";
            
            row = find_parent(row);
            col = find_parent(col);
            
         cout<<row<<" "<<col<<" \n";
            s.insert(row);
            s.insert(col);
        }
        return n - s.size();
        
        
    }
};