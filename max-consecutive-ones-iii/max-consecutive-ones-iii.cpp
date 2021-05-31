class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        
        int n = nums.size();
        
        int i=0;
        int j=0;
        int cnt=0;
        int maxlen =0;
        
        while(j<n)
        {
            if(nums[j]==0)
                cnt++;
            
            while(cnt>k)
            {
                if(nums[i]==0)
                    cnt--;
                i++;
            }
            
            maxlen = max(maxlen, j-i+1);
            j++;
            
        }
        
        return maxlen;
        
    }
};