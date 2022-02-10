class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        map<int,int>mp;
        int sum=0;
        int ct=0;
        
        for(int i=0;i<n;i++)
        {
            sum+= nums[i];
            if(sum==k)
            {
                ct++;
            }
            if(mp[sum-k])
            {
                ct+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ct;
    }
};