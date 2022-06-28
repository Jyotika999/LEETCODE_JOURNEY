class Solution {
public:
    int func(int mid, vector<int>&nums)
    {
        int sum=0;
        
        int  n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%mid==0)
                sum+=nums[i]/mid;
            else
            {
                sum+=nums[i]/mid;
                sum++;
            }
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n = nums.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi =max(maxi, nums[i]);
        }
        int low=1, high=maxi;
        int ans = 1e6;
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            if(func(mid, nums)<=threshold)
            {
                ans = min(ans, mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
        
        
        
        
    }
};