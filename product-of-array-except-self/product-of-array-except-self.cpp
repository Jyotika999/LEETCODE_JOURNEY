class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>ans(n);
        int prefix[n+1];
        int suffix[n+1];
        
        prefix[0]=1;
        for(int i=1;i<n;i++)
        {
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        suffix[n]=1;
        suffix[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            suffix[i] = suffix[i+1]*nums[i+1];
        }
        
        // for(int i=0;i<n;i++)
        // {
        //    // cout<<prefix[i]<<" ";
        //     cout<<suffix[i]<<" ";
        // }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans[i] = suffix[i];
            }
            else if(i==n-1)
            {
                ans[i] = prefix[i];
            }
            else
            {
                ans[i] = prefix[i]*suffix[i];
            }
        }
        
        
        return ans;
        
    }
};