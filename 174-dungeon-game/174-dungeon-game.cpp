class Solution {
public:
    
    // 0, 0->INT_MAX 
          // INT_MAX
    
    
    int solve(int i, int j, int n, int m, vector<vector<int>>&dp, vector<vector<int>>&dung)
    {
        if( i>=n || j>=m)
            return INT_MAX;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
       if(i==n-1 and j==m-1)
       {
           if(dung[i][j]<=0)
               return dp[i][j]= (1+abs(dung[i][j]));
           else
               return dp[i][j]=1;
       }
        
        // right
        int right = solve(i+1, j, n, m, dp, dung);
        int down = solve(i, j+1, n, m, dp, dung);
        
        int mini = min(right, down) - dung[i][j];
        if(mini<=0)
            return dp[i][j]= 1;
        else
            return dp[i][j]=(mini);
        
        // down 
        
            
    }
    int calculateMinimumHP(vector<vector<int>>& dung) {
     
        int n = dung.size();
        int m = dung[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        
        solve(0, 0, n, m, dp, dung);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        return dp[0][0];
        
    }
};