class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        int low =0;
        int high = n-1;
        int ans=-1;
        while(low<=high)
        {
            int mid = (low)+(high-low)/2;
            
            if(arr[mid]<arr[mid+1])
            {
                ans = mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        
        return ans+1;
    }
};