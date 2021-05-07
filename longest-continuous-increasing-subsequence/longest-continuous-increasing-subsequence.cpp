class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int n = nums.size();
        int ans[n];
        for(int i=0;i<n;i++)
            ans[i]=1;
        
        int maxi =1;
        for(int i=1;i<n;i++)
        {
            if(nums[i] > nums[i-1])
            {
                ans[i] = ans[i-1]+1;
            }
          maxi = max( maxi, ans[i]);
        }
        
        return maxi;
    }
};