class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        
        int n =  stones.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum + stones[i];
        }
        int dp[n+1][sum+1];
        memset(dp, 0, sizeof(dp));
        
        for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum / 2; j++) {
            if (j >= stones[i - 1]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - stones[i - 1]] + stones[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return sum - 2 * dp[n][sum / 2];
    }
};