class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        
        int len = primes.size();
        vector<int>pointers(len, 0);
        vector<int>dp(n+5, 0);
        dp[0]=1;
        
        for(int i=1;i<=n;i++)
        {
            long long int mini = INT_MAX;
            for(int j=0;j<len;j++)
            {
                mini = min(mini , 1LL*primes[j]*dp[pointers[j]]);
            }
            for(int j=0;j<len;j++)
            {
                if(mini == 1LL*primes[j]*dp[pointers[j]])
                {
                    pointers[j]+=1;
                }
            }
            dp[i]=mini;
        }
        return dp[n-1];
        
        
        
    }
};