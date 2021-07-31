class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int>s;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            
            if(s.count(nums[i])>=1)
                return true;
            s.insert(nums[i]);
        }
        
        return false;
        
    }
};