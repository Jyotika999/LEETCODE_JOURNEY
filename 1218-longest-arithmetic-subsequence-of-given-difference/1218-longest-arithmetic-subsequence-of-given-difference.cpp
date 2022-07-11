class Solution {
public:
    int longestSubsequence(vector<int>& arr, int k) {
        
        int n = arr.size();
        // sort(arr.begin(), arr.end());
        
        unordered_map<int,int>dp;
        
        int maxi=0;
        
        for(int i=0;i<n;i++)
        {
            dp[arr[i]] = dp[arr[i]-k]+1;
            maxi = max(maxi, dp[arr[i]]);
        }
        
        return maxi;
        
        
    }
};