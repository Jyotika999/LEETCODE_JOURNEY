class Solution {
public:
    
    int ans[505][505];
    
    int mini(int a, int b , int c)
    {
        return min( a, min(b,c));
        
    }
    int solve(string s1, string s2, int n1 , int n2)
    {
        if(n1==0)
            return ans[n1][n2]=n2;
        if(n2==0)
            return ans[n1][n2]=n1;
        
        if(ans[n1][n2]!=-1)
            return ans[n1][n2];
        
        if(s1[n1-1] == s2[n2-1])
            return ans[n1][n2] = solve(s1, s2, n1-1, n2-1);
        else
            return ans[n1][n2] = 1+ mini( solve(s1, s2, n1-1, n2),
                                         solve(s1, s2, n1, n2-1), 
                                         solve(s1, s2, n1-1, n2-1));
    }
    
    int minDistance(string word1, string word2) {
        
        memset(ans, -1, sizeof(ans));
        
        int n1 = word1.length();
        int n2 = word2.length();
        
       return solve(word1, word2, n1, n2);
        
    }
};