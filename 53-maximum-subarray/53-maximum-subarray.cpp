class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
      
        int j=0;
        long long int sum=0;
        long long int maxsum=INT_MIN;
        
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            maxsum = max(maxsum, sum);
            if(sum<0)
                sum=max(0, nums[j]);

        }
        
        return maxsum;
    }
};