class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int pro=1;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                
            }
            else if(nums[i]<0)
            {
                pro=pro*(-1);
            }
            else
                pro=0;
        }
        
        return pro;
        
    }
};