class Solution {
public:
    
    
    int minSetSize(vector<int>& arr) {
        
        int n = arr.size();
        map<int,int>mp;
        
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto it : mp)
        {
            int f = it.first;
            int s = it.second;
            pq.push({s, f});
        }
        
        int half = n/2;
        int sz =0;
        int ct=0;
        while(sz<half)
        {
            auto cur = pq.top();
            pq.pop();
            sz+= cur.first;
            ct++;
        }
        
        return ct;
        
        
    }
};