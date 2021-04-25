class Solution {
public:
    
   // int dp[999][9999];
    
    bool equal_subset_sum_partition(vector<int>nums, int sum , int n,   vector<vector<int>>& dp)
    {
        if(sum==0)
            return 1;
        
        if(n==0)
            return 0;
        
        if(dp[n][sum]!=-1)
            return dp[n][sum];
            
        if(nums[n-1]<=sum)
        {
            return dp[n][sum] = equal_subset_sum_partition(nums,  sum-nums[n-1] , n-1, dp) || equal_subset_sum_partition(nums,  sum , n-1, dp);
        }
        else
        {

        return dp[n][sum] = equal_subset_sum_partition(nums,  sum, n-1, dp) ;
        }
    }
    
    
    
    bool canPartition(vector<int>& nums) {
        
     
        int sum=0;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum&1) return false;
        
      // int dp[n+1][sum+1];
         vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
     //   memset(dp, -1, sizeof(dp));
        cout<<n<<"\n";
        cout<<sum<<"\n";
        return equal_subset_sum_partition(nums, sum/2 , n, dp);
     //   return dp[n][sum];
    }
};