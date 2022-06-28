class Solution {
public:
    long long int func(int mid, vector<int>&piles)
    {
        long long int h=0;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]<=mid)
                h++;
            else
            {
                h+=piles[i]/mid;
                if(piles[i]%mid!=0)
                    h++;
            }
        }
        return h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        // koko's per hour eating speed is k
        
        int n = piles.size();
        int high=0;
        for(int i=0;i<n;i++)
        {
            high  = max(high, piles[i]);
        }
        long long int low=1;
        long long int ans=0;
        while(low<=high)
        {
            long long int mid = (low+high)/2;
            
            if(func(mid, piles)<=h)
            {
                ans=mid;
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