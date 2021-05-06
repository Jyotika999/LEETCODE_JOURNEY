class Solution {
public:
    int lengthOfLIS(vector<int>& ar) {
        
        int n = ar.size();
        int ans[n];
        for(int i=0;i<n;i++)ans[i]=1;
       // memset(ans, 1, sizeof(ans));
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(ar[i] > ar[j])
                {
                    ans[i] = max(ans[i], 1+ ans[j]);
                }
            }
        }
        
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi, ans[i]);
        }
        return maxi;
        
        
    }
};