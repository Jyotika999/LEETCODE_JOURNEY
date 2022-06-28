class Solution {
public:
    bool function(int mid, vector<int>&bloomday, int m , int k)
    {
        int ct=0;
        int boq=0;
        
        int d = bloomday.size();
        for(int i=0;i<d;i++)
        {
            if(bloomday[i]<=mid)
            {
                ct++;
                if(ct>=k)
                { boq++; ct=0;}
            }
            else
            {
                ct=0;
            }
        }
        
        return boq>=m;
    }
    int minDays(vector<int>& bloomday, int m, int k) {
        
        int n  = bloomday.size();
        int low=1;
        int high=0;
        int ans=-1;
        
        for(int i=0;i<n;i++)
        {
            high = max(high, bloomday[i]);
        }
        
        while(low<=high)
        {
            int mid = (low+(high-low)/2);
            if(function(mid, bloomday, m, k)==true)
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