class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        map<int,int>mp;
        
        int n = nums.size();
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        
        int ans=0;
        for(auto it : mp)
        {
            int ff = it.first;
            int ss = it.second;
            
            if(ss==1)ans+=ff;
        }
        
        return ans;
        
    }
};