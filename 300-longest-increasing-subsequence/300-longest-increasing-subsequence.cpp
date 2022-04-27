class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>dp(n+5, 1);
        
        int maxlen=0;
         
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            maxlen = max(maxlen, dp[i]);
        }
        
        return maxlen;
        
        
        
    }
};