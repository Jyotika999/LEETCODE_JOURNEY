class Solution {
public:
    
    
    int func(int speed, vector<int>&piles)
    {
        int hours = 0;
        
        for(int i=0;i<piles.size();i++)
        {
            int q = piles[i]/speed;
            int r = piles[i]%speed;
            
            hours += q;
            if(r)
                hours++;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        int high = 1e9;
        int low = 1;
        int ans = 0;
        
        while(low<=high)
        {
            int mid  = (low+high)/2;
            
            if(func(mid, piles)<=h)
            {
                high = mid-1;
                ans = mid;
            }
            else
            {
                low = mid+1;
            }
            
        }
        
        return ans;
        
    }
};