class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
        
        map<int,int>mp;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[ nums[i] ]++;
        }
        
        for(auto it : mp)
        {
            int ff = it.first;
            int ss = it.second;
            if(ss==1)
                return ff;
        }
        return -1;
    }
};