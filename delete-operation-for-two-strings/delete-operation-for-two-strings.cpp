class Solution {
public:
    
    
    int ans[505][505];
    
    int LCS(string s1, string s2, int n1 , int n2)
    {
        if(n1==0 || n2==0)
            return ans[n1][n2]=0;
        
        if(ans[n1][n2]!=-1)
            return ans[n1][n2];
        
        if(s1[n1-1] == s2[n2-1])
        {
            return ans[n1][n2] = 1+ LCS(s1, s2, n1-1, n2-1);
        }
        else
        {
            return ans[n1][n2] = max(LCS(s1, s2, n1-1, n2) , LCS(s1, s2, n1, n2-1));
        }
        
    }
    
    int minDistance(string s1, string s2) {
        
        int n1 = s1.length();
        int n2 = s2.length();
        memset(ans, -1, sizeof(ans));
        
        int len = LCS(s1, s2, n1, n2);
        return (n1-len)+(n2-len);
    }
};