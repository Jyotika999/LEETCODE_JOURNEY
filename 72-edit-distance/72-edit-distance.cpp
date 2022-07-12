class Solution {
public:
    
    int mini(int a, int b, int c)
    {
        return min(a, min(b, c));
    }
    int solve(string &s1, string &s2, int n1, int n2, int i, int j, vector<vector<int>>&dp)
    {
        if(i==0)
            return j;
        if(j==0)
            return i;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i-1]==s2[j-1])
        {
            return dp[i][j]=solve(s1, s2, n1, n2, i-1, j-1, dp);
        }
        else
        {
            return dp[i][j]=mini(solve(s1, s2, n1, n2, i, j-1, dp), 
                       solve(s1, s2, n1, n2, i-1, j, dp), 
                       solve(s1, s2, n1, n2, i-1, j-1, dp))+1;
        }
        
    }
    int minDistance(string word1, string word2) {
        
        int n1 = word1.size();
        int n2 = word2.size();
        vector<vector<int>>dp(n1+1, vector<int>(n2+1, -1));
        return solve(word1, word2, n1, n2, n1, n2, dp);
        
        
    }
};

// insert , delete , replace 

// convert word1 -> word2 

// choice 
// insertion (1+(i, j+1) )
// delete 1+(i+1, j)
// replace (i+1, j+1)