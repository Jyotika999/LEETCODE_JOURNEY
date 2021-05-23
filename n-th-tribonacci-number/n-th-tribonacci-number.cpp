class Solution {
public:
    
    int ans[40];
    
      int solve(int n)
      {
          
      
            if(n==0)
                return ans[n] =0;

            if(n==1 || n==2)
                return ans[n] = 1;

            if(ans[n]!=-1)
                return ans[n];

            return ans[n] = solve(n-1)+solve(n-2)+solve(n-3);
      }
    
    int tribonacci(int n) {
        
        memset(ans, -1, sizeof(ans));
        return solve(n);
        
    }
};