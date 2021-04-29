class Solution {
public:
    
    int ans[1005][1005];
    
    int LCA(string &s1, string &s2, int n1, int n2)
    {
        if(n1==0 || n2==0)
        {
            return 0;    
        }
        
        if(ans[n1][n2]!=-1)
        {
            return ans[n1][n2];
        }
        if(s1[n1-1] == s2[n2-1])
        {
           return ans[n1][n2] =  1+ LCA(s1, s2, n1-1, n2-1);
        }
        else
        {
            return ans[n1][n2] = max(LCA(s1, s2, n1-1, n2), LCA(s1, s2, n1, n2-1) );
        }
        
    }
    int longestPalindromeSubseq(string s) {
        
        string s1= s;
        reverse(s.begin(), s.end());
        memset(ans, -1, sizeof(ans));
        int n = s.length();
        return LCA(s1, s, n , n);
        
    }
};