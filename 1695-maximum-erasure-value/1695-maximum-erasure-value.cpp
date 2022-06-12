class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n = nums.size();
        int sum=0;
        int maxsum=0;
        map<int,int>mp;
        int j=0;
        for(int i=0;i<n;i++)
        {
            sum+= nums[i];
            mp[nums[i]]++;
            
            while(mp[nums[i]]>1)
            {
                sum-= nums[j];
                mp[nums[j]]--;
                j++;
            }
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};


// [4, 2, 4, 5, 6]
// subarray removed = [2, 4, 5, 6]
// sum = 2 +4 +5 +6 = 6 + 5 +6 = 17 