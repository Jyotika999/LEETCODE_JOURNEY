class Solution {
public:
    int minimumTotal(vector<vector<int>>& ar) {
    
    int n = ar.size();
    int cur = n-1;
    for(int i=0; i<n; i++) {
        for(int j=1; j<=i; j++) ar[cur].push_back(0);
        cur--;
    }
        
        for(int i=n-1;i>=0;i--){
            auto it = ar[i];
            
            for(int j=0;j<it.size();j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<"\n";
        }
        
        
    int dp[n][n];
        
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) dp[i][j] = 1e4;
        
        
    dp[0][0] = ar[0][0];
    for(int i=1; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j)
            dp[i][j] = min(dp[i-1][j-1], dp[i-1][j]) + ar[i][j];
            else dp[i][j] = dp[i-1][j] + ar[i][j]; 
        }
    }
    int ans = INT_MAX;
    for(int i=0; i<n; i++) ans = min(ans, dp[n-1][i]);
    return ans;
    }
};