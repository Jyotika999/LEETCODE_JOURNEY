class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0)
            return;
        else if(m==0)
        {
            nums1=nums2;
            return;
        }
        int k = m+n-1;
        
        int i= m-1, j=n-1;
        
        
        cout<<i<<" "<<j<<"\n";
        while(i>=0 and j>=0)
        {
             cout<<k<<" "<<nums1[k]<<" "<<nums1[i]<<" "<<nums2[j]<<"\n";
            if(nums1[i]<nums2[j])
            {
                nums1[k]=nums2[j];
                j--;
            }
            else
            {
                nums1[k]=nums1[i];
                i--;
            }
            k--;
        }
        
        // ab jo rehgye
        while(i>=0)
        {
            nums1[k] = nums1[i];
            i--;
            k--;
            
        }
        
        while(j>=0)
        {
            nums1[k]=nums2[j];
            j--;
            k--;
        }
        
        
    }
};