class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        
        
        int n = nums1.size();
        
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                    mp[nums1[i] + nums2[j]]++;
            }
        }
        
        int ct=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum = nums3[i] + nums4[j];
                sum = -1 * sum;
                if(mp[sum])
                    ct+=mp[sum];
            }
        }
        return ct;
        
    }
};