class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        
        // just for practise of sliding window technique
        int n = nums.size();
       int cnt=0;
        int maxlen =0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                cnt++;
                 maxlen = max(maxlen, cnt);
            }
            else
            {
                cnt=0;
            }
           
        }
        
        return maxlen;
        
        
        
        
        
    }
};