class Solution {
public:
    
    vector<int> largestDivisibleSubset(vector<int>& nums) {
         vector<int>finalans;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        int ans[n];
        int prev[n];
        
        for(int i=0;i<n;i++)
        {
            ans[i]=1;
            prev[i]=-1;
        }
        
        //memset(ans, 1, sizeof(ans));
        int maxi = INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if( (nums[i] % nums[j])==0)
                {
                    if(ans[i] < 1+ ans[j])
                    {
                        ans[i] = max(ans[i] , 1+ ans[j]);
                        prev[i] = j;
                    }
                    
                }
            }
        
        
        }
        
        int ind=0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(maxi< ans[i])
            {
                maxi = max(maxi, ans[i]);
                ind = i;
            }
        }
        
        
        while(prev[ind]!=-1)
        {
            finalans.push_back(nums[ind]);
            ind = prev[ind];
        }
        finalans.push_back(nums[ind]);
      cout<< maxi;
        return finalans;
        
    }
};