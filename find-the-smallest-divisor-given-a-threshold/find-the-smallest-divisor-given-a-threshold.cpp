class Solution {
public:
    
    bool func(int x, vector<int>&nums, int n , int t)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int res=0;
            
            if(nums[i]%x==0)
                res+= nums[i]/x;
            else
                res= nums[i]/x + 1;
            
            sum+=res;
        }
        if(sum<=t)
            return true;
        else
            return false;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int ans=0;
        int low = 1;
        int high = 1e9;
        
        while(low<=high)
        {
            int mid = (low)+(high-low)/2;
            
            if(func(mid, nums, n, threshold))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low= mid+1;
            }
        }
        return ans;
    }
};