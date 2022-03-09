class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int maxi=1;
        
        int n  = nums.size();
        int ct=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                ct++;
                if(ct>n/2)
                    maxi = nums[i];
            }
            else
                ct=1;
        }
        return maxi;
        
    }
};