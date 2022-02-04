class Solution {
public:
    
    int findMaxLength(vector<int>& nums) {
        
         int n = nums.size();
        
        int sum=0;
        unordered_map<int,int>mp;
        
        int maxlen=0;
        mp[0]=-1;
        
        for(int i=0;i<n;i++)
        {
           if(nums[i]==1)
               sum+=1;
            else
                sum+=-1;
            
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
            else
            {
                maxlen = max(maxlen, i- mp[sum]);
            }
            
        }
        
        return maxlen;
    }
};
