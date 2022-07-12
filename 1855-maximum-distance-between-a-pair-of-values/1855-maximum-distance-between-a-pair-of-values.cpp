class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        
        int n1  = nums1.size();
        int n2  = nums2.size();
        
        int i=0, j=0;
        int maxi=0;
        
        while(i<n1)
        {
            while(j<n2 and nums1[i]<=nums2[j])
            {
                // cout<<i<<" "<<j<<"\n";
                int temp = j-i;
                maxi = max(maxi, temp);
                j++;
            }
            i++;
        }
        return maxi;
        
        
    }
};