// https://leetcode.com/problems/ugly-number-ii/discuss/69368/Elegant-C%2B%2B-Solution-O(N)-space-time-with-detailed-explanation.

class Solution {
public:
    int nthUglyNumber(int n) {
        
        // 2 = [2, 4, 6, 8....]
        // 3 = [3, 6, 9, 12...]
        // 5 = [5, 10, 15, 20.]
        
        if(n==1)
            return 1;
        
        vector<int>dp(n+2, 0);
        dp[0]=1;
        int i2=0, i3=0, i5=0;
        
        for(int i=1;i<=n;i++)
        {
            int cur = min(dp[i2]*2, min(dp[i3]*3, dp[i5]*5));
            dp[i]=cur;
            if(cur==dp[i2]*2)
            {
                i2++;
            }
            if(cur==dp[i3]*3)
            {
                i3++;
            }
            if(cur==dp[i5]*5)
            {
                i5++;
            }
            
        }
        return dp[n-1];
        
        // time : O(n)
        // space : O(n)
    }
};