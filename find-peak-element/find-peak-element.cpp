class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
     
        if(n==1)
            return 0;
        
        int low=0;
        int high = n-1;
        
        while(low<=high)
        {
            int mid = (low)+(high-low)/2;
            
            if(mid>0 && mid<n-1)
            {
                if(nums[mid]> nums[mid-1] && nums[mid]>nums[mid+1])
                {
                    return mid;
                }
                else if(nums[mid-1] < nums[mid])
                {
                    // right side se chota hai
                    // left side se bda hai 
                    low = mid+1;
                }
                else
                {
                    // left side se chota h 
                    // right side se bda h 
                    high = mid-1;
                }
            }
            
            if(mid==0)
            {
                if(nums[0]>nums[1])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            if(mid == n-1)
            {
                if(nums[mid]>nums[mid-1])
                {
                    return mid;
                }
                else
                {
                    return mid-1;
                }
            }
            
            
        }
        
        
        return 0;
    
    }
};