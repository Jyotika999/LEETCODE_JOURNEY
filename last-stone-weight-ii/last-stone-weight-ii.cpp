class Solution {
public:
    
    int dp[105][100005];
 
    
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