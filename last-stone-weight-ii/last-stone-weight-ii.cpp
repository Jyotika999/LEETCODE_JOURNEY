class Solution {
public:
    
    int dp[105][100005];
    
//     int smash_stones( vector<int>&nums, int n , int sum)
//     {
//         if(sum==0)
//         {
//             return dp[n][sum]=1;
//         }
//         if(n==0)
//         {
//             return dp[n][sum]=0;
//         }
//         if(dp[n][sum]!=-1)
//         {
//             return dp[n][sum];
//         }
        
//         if(nums[n-1] <=  sum)
//         {
//             return dp[n][sum] = smash_stones(nums, n-1, sum) || smash_stones(nums, n-1, sum - nums[n-1]);
//         }
//         else
//         {
//             return dp[n][sum] = smash_stones(nums, n-1, sum);
//         }
        
//     }
    
    
    int lastStoneWeightII(vector<int>& stones) {
    
        int n = stones.size();
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum = sum + stones[i];
        }
        
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
                if(stones[i-1]<= j)
                {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-stones[i-1]];
                }
                else
                {
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        
      
        
        
        int mini = INT_MAX;
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum/2;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        
        
        for(int i=0;i<=sum/2;i++)
        {
            if(dp[n][i] == 1)
                mini =  min ( mini, abs(sum - 2*i));
        }
        
        return mini;
        
        
    }
};