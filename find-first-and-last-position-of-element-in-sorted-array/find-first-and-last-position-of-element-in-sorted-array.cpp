class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int start=-1;
        int endd= -1;
        
        int low=0;
        int high = nums.size()-1;
        vector<int>ans;
        
        // compute starting index 
        while(low<=high)
        {
            int mid = (low+(high-low)/2);
            
            if(nums[mid]==target)
            {
                start=mid;
                high = mid-1;
            }
            else if(nums[mid] > target)
            {
                high = mid -1;
            }
            else
            {
                low = mid+1;
            }
        }
        
        low = 0;
        high = nums.size()-1;
        // compute ending index
         while(low<=high)
        {
            int mid = (low+(high-low)/2);
            
            if(nums[mid]==target)
            {
                endd=mid;
                low = mid+1;
            }
            else if(nums[mid] > target)
            {
                high = mid -1;
            }
            else
            {
                low = mid+1;
            }
        }
        
        ans.push_back(start);
        ans.push_back(endd);
        
        return ans;
        
        
    }
};