class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        int n = nums.size();
        
        int ct=0;
        int prev=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]<=nums[i])
            {
                
            }
            else
            {
                // either update nums[i]=nums[i+1]
                // or update nums[i+1]=nums[i]
                
                // ex = [3, 4, 2, 3]  = [3, 4, 4, 3]
                            if(i>=2 and nums[i]<nums[i-2])
                                   nums[i]=nums[i-1];
                                   
                            else
                                nums[i-1]=nums[i];
                       
                                ct++;
                
            }
        }
        
        return (ct==1||ct==0);
        
    }
};