class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1)
            return 0;
        int low=0;
        int high=n-1;
        int ans=0;
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(mid==0)
            {
                if(nums[mid]<nums[mid+1])
                {
                    // probability is high ki mid+1 is peak , since its greater 
                    low=mid+1;
                }
                else
                {
                    ans=mid; break;
                }
            }
            else if(mid==n-1)
            {
                if(nums[mid-1]<nums[mid])
                {
                    ans=mid; break;
                }
                else{
                    // probability is high that left wala element is the peak element 
                    high-mid-1;
                }
            }
            else
            {
                if(nums[mid-1]<nums[mid] and nums[mid+1]<nums[mid])
                {
                    ans=mid; break;
                }
                else if(nums[mid-1]>nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
        }
        
        
        return ans;
    }
};