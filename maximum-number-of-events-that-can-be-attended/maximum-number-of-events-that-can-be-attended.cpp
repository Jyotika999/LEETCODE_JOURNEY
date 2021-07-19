static bool cmp(vector<int>&a , vector<int>&b)
    {
        return a[1] < b[1];
    }

class Solution {
public:
    
    
    int maxEvents(vector<vector<int>>& events) {
        
       
        sort(events.begin(), events.end(), cmp);
        int ct=0;
        map<int,int>mp;
        set<int>t;
        int last=0;
        
        for(int i=0;i<events.size();i++)
        {
            last = max(last, events[i][1]);
        }
        
        for(int i=1;i<=last;i++)
        {
            t.insert(i);
        }
        
        
        int total=0;
        int prev = 0;
        for(int i=0;i<events.size(); i++)
        {
            int start = events[i][0];
            int end = events[i][1];
           
            auto curday = t.lower_bound(start);
            
            if(curday == t.end() || *curday>end)
            {
                continue;
            }
            else{
            t.erase(curday);
            ct++;
            }
        }
        return ct;
        
    }
};
// it will give tle if you directly insert 10^5 elements in set 
// try to insert the elements in the set till the last maximum value 
// O(N^2) approach  --> O(nlogn) using lowerbound in set 
