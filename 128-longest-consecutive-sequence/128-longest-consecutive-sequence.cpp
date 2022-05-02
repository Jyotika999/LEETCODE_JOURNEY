class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        map<int,int>mp;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=1;
        }
        int maxlen=0;
        for(auto it : mp)
        {
            if(mp[it.first-1])
            {
                mp[it.first]=mp[it.first-1]+1;
            }
            maxlen = max(maxlen, mp[it.first]);
        }
        return maxlen;
    }
};