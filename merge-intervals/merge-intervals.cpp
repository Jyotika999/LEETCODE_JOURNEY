class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>ans;
        
        stack<pair<int,int>>s;
        
        sort(intervals.begin() , intervals.end());
        
        int total_intervals = intervals.size();
        
        for( int i =0 ; i < total_intervals ; i++)
        {
            int l = intervals[i][0];
            int r = intervals[i][1];
            
            if(s.empty())
            {
               s.push({l, r}); 
            }
            else
            {
                auto temp = s.top();
              //  s.pop();
                int f = temp.first;
                int se = temp.second;
                
                if(l<= se)
                {
                    s.pop();
                    s.push({f, max(se, r)});
                }
                else
                {
                    s.push({l ,r});
                }
            }
        }
        while(!s.empty())
        {
            auto p = s.top();
            s.pop();
            ans.push_back({p.first, p.second});
        }
        
        return ans;
        
    }
};