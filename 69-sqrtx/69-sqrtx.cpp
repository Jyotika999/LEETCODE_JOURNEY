class Solution {
public:
    int mySqrt(int x) {
      
        int low=0;
        int high=x;
        int ans=0;
        while(low<=high)
        {
            int mid = (low+(high-low)/2);
            
            if(1LL*mid*mid==x)
            {
                ans=mid;
                break;
            }
            else if(1LL*mid*mid<x)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};