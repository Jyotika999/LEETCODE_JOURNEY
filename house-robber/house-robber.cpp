class Solution {
public:
    
    int ans[1005];
    
    int solve(vector<int>&nums, int n)
    {
        
        if(n<0)
            return ans[n]=0;
        if(n==0) 
            return ans[n]=0;
        if(n==1) 
            return ans[n]= nums[n-1];
        
        if(n==2) 
            return ans[n]=max(nums[n-2], nums[n-1]);
        
        if(ans[n]!=-1)
            return ans[n];
        
        else
            return ans[n] = max( nums[n-1]+ solve(nums, n-2) , solve(nums, n-1));
        
    }
    
    
    int rob(vector<int>& nums) {

        int n = nums.size();
        memset(ans, -1, sizeof(ans));
        
        solve(nums, n); 
        
        int maxi = 0;
        for(int i=0;i<=n;i++)
        {
            maxi = max(ans[i], maxi);
            cout<<ans[i]<<"\n";
        }
            
        
        return maxi;
        
    }
};



