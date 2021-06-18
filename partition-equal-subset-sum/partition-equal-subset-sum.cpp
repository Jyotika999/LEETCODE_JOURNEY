class Solution {
public:
    
    int dp[205][20005];
    
    bool partition(int sum, vector<int>&nums, int i, int n)
    {
        if(sum==0)
            return dp[i][sum]=true;
        
        if(i==n)
            return dp[i][sum]=false;
        
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        
        if(nums[i]<=sum)
        {
            return dp[i][sum] = partition(sum-nums[i], nums , i+1, n)|| partition(sum , nums, i+1, n);
        }
        else
        {
            return dp[i][sum]= partition(sum, nums, i+1, n);
        }
        
    }
    
    
    bool canPartition(vector<int>& nums) {
        
        memset(dp, -1, sizeof(dp));
        
        int sum=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
            sum+= nums[i];
        
        if(sum%2!=0)
            return false;
        
        
        return partition(sum/2, nums, 0, n);
    }
};