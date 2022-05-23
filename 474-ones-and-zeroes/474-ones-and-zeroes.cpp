class Solution {
public:
    int dp[605][105][105];
    
    int find_max_subset(vector<pair<int,int>>&v, int ind, int m, int n)
    {
        if(ind>=v.size())
            return 0;
        
        if(dp[ind][m][n]!=-1)
            return dp[ind][m][n];
        
        if(v[ind].first<=m and v[ind].second<=n)
        {
            // either choose current element
            int inc = (1+ find_max_subset(v, ind+1, m-v[ind].first, n-v[ind].second));
            
            // or dont choose this element 
            int exc = find_max_subset(v, ind+1, m, n);
            return dp[ind][m][n]=max(inc, exc);
        }
        else
        {
            // dont choose this element
            return dp[ind][m][n]=find_max_subset(v, ind+1, m, n);
        }
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        
        // something related to knapsack problem 
        // since we need to have atmost m 0's 
        // and atmost n 1's 
        // on doing analogy to the standard knapsack problem
        // total wt = m 0s and n 1s 
        // choose the lasrgest possible subset 
        
        // dp states = m, n, index 
        // calculate 0s and 1s for every string which is present in the vector
        
        vector<pair<int,int>>v;
        // {count of zero, count of one}
        int n1 = strs.size();
        
        for(int i=0;i<n1;i++)
        {
            string cur = strs[i];
            int ct=0;
            for(int j=0;j<cur.length();j++)
            {
                if(cur[j]=='0')
                    ct++;
            }
            v.push_back({ct, cur.length()-ct});
        }
        memset(dp, -1, sizeof(dp));
        
        return find_max_subset(v, 0, m, n);
        
        
        
        
        
    }
};