class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        map<int,int>mp;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        int ans=0;
        
        for(auto it : mp)
        {
            int f = it.first;
            int s = it.second;
            
            ans = ans + (s*(s-1))/2;
        }
        
        return ans;
        
    }
};