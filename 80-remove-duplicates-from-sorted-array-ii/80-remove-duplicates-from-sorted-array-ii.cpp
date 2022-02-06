class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        map<int, int>mp;
        
        for(int i=0;i<nums.size();)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>2)
            {
                nums.erase(nums.begin()+i);
            }
            else
                i++;
        }
        
        return nums.size();
        
        
        
        
    }
};