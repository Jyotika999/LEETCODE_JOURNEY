class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int>ans;
        int n = nums.size();
        
        // top k maximum frequency elements 
        // similar to the concept of top k maximum elements = min heap 
        
        priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        
        map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it : mp)
        {
            int ff = it.first;
            int ss = it.second;
            
            // sort first on the basis of frequency and then on basis of elements
            pq.push({ss, ff});
            if(pq.size()>k)
                pq.pop();
        }
        
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
        
    }
};