class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum= 0;
        int maxsum = INT_MIN;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            sum = sum+ nums[i];
            
           
            
            maxsum = max(maxsum, sum);
             if(sum<0)
                sum=0;
        }
        
        return maxsum;
        
        
        
        
    }
};