class Solution {
public:
    
    bool valid(vector<vector<int>>& pairs , int i , int j)
    {
        int a = pairs[i][0];
        int b = pairs[i][1];
        int c = pairs[j][0];
        int d = pairs[j][1];
        
        if(b<c) return  true;
        else return false;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        
        int n = pairs.size();
        
        int maxi = INT_MIN;
        int ans[n];
     
        
        sort(pairs.begin(), pairs.end());
        
        
        for(int i=0;i<n;i++)
            ans[i]=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(valid ( pairs, j, i)) // [a, b] --> [c , d]  ---> b < c
                {
                    ans[i] = max( ans[i], 1+ ans[j]);
                }
            }
        }
        
        
        for(int i=0;i<n;i++)
            maxi = max( maxi, ans[i]);
        
        return maxi;
        
    }
};