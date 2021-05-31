class Solution {
public:
    
    int dp[1005];
    
    int solve(int n, vector<int>&nums)
    {
        if(n==0)
            return 0;
        if(n==1)
            return dp[n] = nums[n-1];
        
        if(n==2)
            return dp[n] = max(nums[0], nums[1]);
        
        if(dp[n]!=-1)
            return dp[n];
        
        return dp[n] = max( nums[n-1] + solve(n-2, nums), solve(n-1, nums));
    }
    
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        
        return solve(n, nums);
        
    }
};