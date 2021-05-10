class Solution {
public:
    
    int ans[505][505];
    
    int solve(vector<int>&A, vector<int>&B, int n1, int n2)
    {
        if(n1==0||n2==0)
            return ans[n1][n2]=0;
        
        if(ans[n1][n2]!=-1)
            return ans[n1][n2];
        
        if(A[n1-1] == B[n2-1])
            return ans[n1][n2] = 1+ solve(A, B, n1-1, n2-1);
        else
            return ans[n1][n2] = max(solve(A, B, n1-1, n2) , solve(A, B, n1, n2-1));
    }
    
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        
        int n1 = A.size();
        int n2 = B.size();
        memset(ans, -1, sizeof(ans));
        
        return solve(A, B, n1, n2);
        
    }
};