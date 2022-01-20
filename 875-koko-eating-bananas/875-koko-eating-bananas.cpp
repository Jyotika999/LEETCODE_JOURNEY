class Solution {
public:
    
    int func(int v, vector<int>&piles)
    {
        int n = piles.size();
        int ct=0;
        
        for(int i=0;i<n;i++)
        {
            if(piles[i]<=v)
            {
                ct++;
            }
            else
            {
                ct+=piles[i]/v;
                int rem = piles[i]%v;
                if(rem)
                    ct++;
            }
        }
        return ct;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        long long int high=0;
        long long int low=1;
        
        for(int i=0;i<n;i++)
            high = high + piles[i];
        
        int ans=0;
        while(low<=high)
        {
            long long int mid = low+(high-low)/2;
            
            if(func(mid, piles)<=h)
            {
                ans = mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        
        return ans;
        
    }
};