class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n;
        int ans=0;
        int mid=0;
        while(low<high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
               // break;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
                //ans=low;
            }
            else
            {
                high=mid;
              //  ans=mid;
            }
       
        }
   return high;
        
    }
};