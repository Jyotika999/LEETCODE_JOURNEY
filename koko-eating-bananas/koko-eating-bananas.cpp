// MONOTONIC
// MINIMUM JAISA PUCHA H
// NLOGM time 


class Solution {
public:
    
    bool func(int mid, vector<int>&piles, int h)
    {
        int ct=0;
        int n = piles.size();
        for(int i=0;i<n;i++)
        {
           int q = piles[i]/mid;
           int rem = piles[i]%mid;
            
            ct+=q;
            if(rem)
                ct++;
            
        }
        
        if(ct<=h)
            return true;
        else
            return false;
        
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = 1e9;
        int ans=0;
        
        while(low<=high)
        {
            int mid = (low)+(high-low)/2;
            
            /// FFFFFFFFFFFFFFTTTTTTTTTTTTTT. and i  need to find the first true (T)
            if(func(mid, piles, h)==true)
            {
                ans =mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        
        return ans;
        
        
    }
};