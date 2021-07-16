class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        map<int,int>mp;
        
        for(int i=0;i<n1;i++)
        {
            mp[nums1[i]]++;
        }
        
        for(int j=0;j<n2;j++)
        {
            if(mp[nums2[j]] and (find(ans.begin(), ans.end(), nums2[j])==ans.end()))
            {
                ans.push_back(nums2[j]);
            }
        }
        return ans;
        
    }
};