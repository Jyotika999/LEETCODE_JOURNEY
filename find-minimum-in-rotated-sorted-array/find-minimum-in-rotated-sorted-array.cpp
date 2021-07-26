class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1)
            return nums[0];
        
        int low = 0;
        int high = n-1;
        int mid;
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            int prev = (mid-1+n)%n;
            int next = (mid+1)%n;
            
            if(nums[mid]<nums[prev] and nums[mid]<nums[next])
            {
                return nums[mid];
            }
            else if(nums[mid]<=nums[high])
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return mid;
        
        
    }
};