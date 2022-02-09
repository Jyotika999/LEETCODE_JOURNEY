class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int n = nums.size();
        map<int,int>mp;
        int ct=0;
        
        for(int i=0;i<n;i++)
        {   
            mp[nums[i]]++;
        }
        
        for(auto it : mp)
        {
            int ff = it.first;
            int ss = it.second;
            
            if(k!=0 and mp.find(ff+k)!=mp.end())
            ct++;
            
            if(k==0 and ss>1)
            {
                ct++;
            }
        }
        return ct;
    }
};