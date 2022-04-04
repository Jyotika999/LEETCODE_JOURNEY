class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int sum=0;
        int maxsum=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            sum+= nums[i];
            
              if(sum>maxsum)
                maxsum = max(sum, maxsum);
            
            if(sum<0)
                sum=0;
            
          
        }
        
        return maxsum;
    }
};