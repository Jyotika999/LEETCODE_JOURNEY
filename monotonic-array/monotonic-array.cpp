class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int inc=1;
        int dec=1;
        
        int n = nums.size();
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]>=nums[i-1])
            {
                
            }
            else
            {
                inc=0;break;
            }
        }
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]<=nums[i-1])
            {
                
            }
            else
            {
                dec=0;
                break;
            }
        }
        
        return (inc||dec);
        
    }
};