class Solution {
public:
    
    int ans[1005][1005];
    
    int solve(string &s1, string &s2, int n1 , int n2)
    {
        if(n1==0 && n2==0)
            return ans[n1][n2]=0;
        
        if(n1==0)
            return ans[n1][n2] = (int)(s2[n2-1]) + solve(s1, s2, n1, n2-1);
        
        if(n2==0)
            return ans[n1][n2] = (int)(s1[n1-1]) + solve(s1, s2, n1-1, n2);
        
        if(ans[n1][n2]!=-1)
            return ans[n1][n2];
        
        if(s1[n1-1] == s2[n2-1])
            return ans[n1][n2]= solve(s1, s2, n1-1, n2-1);
        else
            return ans[n1][n2]= min ( solve(s1, s2, n1-1, n2) + (int)s1[n1-1]   , 
                                      solve(s1, s2, n1, n2-1) + (int)s2[n2-1]);
        
    }
    
    
    int minimumDeleteSum(string s1, string s2) {
        
        
        memset(ans, -1, sizeof(ans));
        
        int n1 = s1.length();
        int n2 = s2.length();
        
        return solve(s1, s2, n1, n2);
        
        
        
    }
};