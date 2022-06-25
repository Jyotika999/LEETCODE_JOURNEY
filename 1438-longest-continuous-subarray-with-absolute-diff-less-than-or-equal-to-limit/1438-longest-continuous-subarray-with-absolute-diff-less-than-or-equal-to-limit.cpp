class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        int n = nums.size();
        // priority_queue<pair<int,int>>maxi;
        // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>mini;
        multiset<int>ms;
        // index, value
        
        int i=0;
        int j;
        int len=0;
        
        for(j=0;j<n;j++)
        {
            ms.insert(nums[j]);
            
            while(!ms.empty() and (*ms.rbegin() - *ms.begin())>limit)
            {
                ms.erase(ms.find(nums[i]));
                i++;
            }
            
            len = max(len, j-i+1);
        }
        
        return len;
    }
};