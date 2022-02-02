class Solution {
public:
    
    void dfs(int i, int n, vector<int>&ans)
    {
        if(i>n)
            return ;
        
        ans.push_back(i);
        for(int j=0;j<=9;j++)
        {
            dfs(i*10+j, n, ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        
        vector<int>ans;
        
        for(int i=1;i<=9;i++)
        {
            if(i<=n)
            {
                dfs(i, n, ans);
            }
        }
        return ans;
    }
};