class Solution {
public:
    
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int num=0;
        int n = matrix.size();
        int m = matrix[0].size();
        
        priority_queue< vector<int>, vector<vector<int>>, greater<vector<int>>>pq;
        set<pair<int,int>>s;
        s.insert({0,0});
        
        for(int i=0;i<n;i++)
        pq.push({matrix[i][0], i, 0});
        
            while(k-1)
            {
                auto cur = pq.top();
                int x = cur[1];
                int y = cur[2];
                 pq.pop();
                if(y+1<matrix[x].size() and s.count({x, y+1})==0)
                {
                    s.insert({x, y+1});
                    pq.push({matrix[x][y+1], x, y+1});
                }
               
                k--;
                
            }
        
        int x = pq.top()[0];
        return x;
    }
};