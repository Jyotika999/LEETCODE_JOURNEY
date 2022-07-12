class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        
        // sort(nums.begin(), nums.end());
        int n = nums.size();
        
        vector<vector<int>>dp(n, vector<int>(1001, 1));
        
        // either increase every difference value by 500
        // or use a map
        int maxlen=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int dif = nums[j]-nums[i]+500;
                dp[j][dif] = max(dp[i][dif]+1, dp[j][dif]);
                maxlen = max(maxlen, dp[j][dif]);
            }
        }
        
        return maxlen;
        
        
    }
};