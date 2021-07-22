class Solution {
public:
    
    int dp[205][10005];
    
    int solve(int i, vector<int>&nums, int sum)
    {
       // cout<<i<<" "<<sum<<"\n";
        if(sum==0)
        {
            return dp[i][sum] = 1;
        }
        if(i==0)
        {
            return dp[i][sum] = 0;
        }
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        
        if( nums[i-1] <= sum)
        {
            return dp[i][sum] = (solve(i-1, nums, sum - nums[i-1]) || solve(i-1, nums, sum) );
        }
        else
        {
            return dp[i][sum] = solve(i-1, nums, sum);
        }
        
    }
    
    bool canPartition(vector<int>& nums) {
        
        memset(dp, -1, sizeof(dp));
        
        int n = nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum = sum + nums[i];
        }
        if(sum%2!=0)
            return false;
        
        sum = sum/2;
        
        return solve(n , nums, sum);
        return dp[n][sum];
    }
};