class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>dp(n, 1);
        vector<int>cnt(n, 1);
        int maxlen=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    if(dp[j]+1==dp[i])
                    {
                        cnt[i]+=cnt[j];
                        // dp[i]=dp[j]+1;
                    }
                    if(dp[j]+1>dp[i])
                    {
                        dp[i]=dp[j]+1;
                        cnt[i]=cnt[j];
                    }
                }
            }
            maxlen = max(maxlen, dp[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cout<<dp[i]<<"\n";
            if(dp[i]==maxlen)
                ans+=cnt[i];
        }
        
        return ans;
        
        
    }
};