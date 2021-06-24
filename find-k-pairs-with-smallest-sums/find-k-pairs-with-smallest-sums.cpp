class Solution {
public:
    
//     class tuple{
//         public:
//         int sum;
//         int i;
//         int j;
        
//         tuple(int sum, int i, int j )
//         {
//            this->sum = sum;
//            this->i=i;
//            this->j=j;
//         }
//     };
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        vector<vector<int>>ans;
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>> >pq;
        
        auto t = {nums1[0]+nums2[0], 0, 0};
        pq.push(t);
        set<pair<int,int>>s;
        s.insert({0,0});
            
        while(!pq.empty() and k)
        {
            auto cur = pq.top();
            int x = cur[1];
            int y = cur[2];
            ans.push_back({nums1[x], nums2[y]});
            pq.pop();
            
            if( x+1<n1 and s.count({x+1, y})==0)
                pq.push({nums1[x+1]+nums2[y],  x+1, y});
                s.insert({x+1, y});
            
             if(y+1<n2 and s.count({x, y+1})==0)
                pq.push({nums1[x]+nums2[y+1],  x, y+1});
                s.insert({x, y+1});
            
            
            k--;
            
        }
        
        return ans;
        
    }
};