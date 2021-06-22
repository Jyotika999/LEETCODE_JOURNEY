class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // we need to  find the frequnecy of each element 
        // then we would find the top k maximum elements 
        // i.e having the maximum frequency
        // since we need to find top k maximum frequnecy elements
        // we have to use the concept of min heap 
        
        
        vector<int>ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        
        map<int,int>mp;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it : mp)
        {
            int ff = it.first; // original number present in the array
            int ss = it.second; // frequency of the number present
            
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