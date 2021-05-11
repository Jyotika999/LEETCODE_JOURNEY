class Solution {
public:
    
    long long int ans[105][105];
    
    
    long long int solve(int m, int n)
    {
        if(m==0||n==0)
            return ans[m][n]=1;
        
        if(m<0 || n<0)
            return 0;
        
        if(ans[m][n]!=0)
            return ans[m][n];
        
        long long int ways=0;
        if(m-1>=0)
            ways+= solve(m-1, n);
        
        if(n-1>=0)
            ways+= solve(m, n-1);
        
        return ans[m][n] = ways;
    }
    
    
    long long int uniquePaths(int m, int n) {
       
        memset( ans, 0, sizeof(ans));
        
       if(m==1 || n==1)
           return 1;
        long long int t = solve(m, n);
        // for(int i=0;i<=m;i++)
        // {
        //     for(int j=0;j<=n;j++)
        //     {
        //         cout<<ans[i][j]<<" ";
        //     }
        // }
      //  cout<<ans[m-1][n-1]<<"\n";
        return ans[m-1][n-1];
        
    }
};