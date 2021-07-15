class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ans;
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(mp[target - nums[i]])
            {
                // found 
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]] -1);
                return ans;
            }
            mp[nums[i]]=i+1;
            
        }
        
        return ans;
        
    }
};