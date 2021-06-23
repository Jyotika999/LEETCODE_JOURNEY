class Solution {
public:
    
    
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       
        priority_queue< pair<int, pair<int,int>>> pq;
        
        vector<vector<int>>ans;
        
        
        int n = points.size();
        
        // sqrt(x^2 + y^2) = (x^2 + y^2)
        
        for(int i=0;i<n;i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            
            int dis = x*x + y*y;            
            pq.push({dis, {x,y}});
            
            if(pq.size()>k)
            {
                pq.pop();
            }
            
        }
        
        while(!pq.empty())
        {
            auto cur = pq.top();
            vector<int>temp;
           auto s = cur.second;
            temp.push_back(s.first);
            temp.push_back(s.second);
            
            ans.push_back(temp);
            pq.pop();
        }
        
        return ans;
        
        
        
    }
};