class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int n = nums.size();
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum  = sum + nums[i];
        }
        
        if(sum&1)
            return false;
        
        sum = sum/2;
        
        int dp[n+1][sum+1];
        
        memset(dp, -1, sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j==0)  // sum=0 
                {
                    dp[i][j]=1;
                    continue;
                }
                if(i==0)
                {
                    dp[i][j]=0;
                    continue;
                }
                if(nums[i-1]<= j)
                {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
                else
                {
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        
        return dp[n][sum];
        
        
        
    }
};