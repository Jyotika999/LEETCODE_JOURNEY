// ARRAY OF SIZE N 
// COMPLEXITY : O(NLOGM)
// MINIMUM NIKALNA HAI KUCH 
// PREDICATE FUNCTION PATTERN WILL BE OF THE FORMAT : ......FFFFFFFTTTTTTTTT.......

class Solution {
public:
    
    
    
    bool func(int mid, vector<int>&ar, int m , int k , int n)
    {
        int boq=0;
        int flowers=0;
        
        for(int i=0;i<n;i++)
        {
            if(ar[i]<=mid)
            {
                flowers++;
            }
            else
            {
                flowers=0;
            }
            
            if(flowers==k)
            {
                boq++;
                flowers=0;
            }
        }
        
        if(boq>=m)
            return true;
        else
            return false;
    }
    
    int minDays(vector<int>& ar, int m, int k) {
        
        int low = INT_MAX;
        int high = INT_MIN;
        int n = ar.size();
        for(int i=0;i<n;i++)
        {
            low = min(low, ar[i]);
            high = max(high, ar[i]);
        }
       // cout<<low<<" "<<high<<"\n";
        int ans=-1;
        
        while(low<=high)
        {
            int mid = (low)+(high-low)/2;
            // FFFFFFFFFFFFFFFFFFFFTTTTTTTTTTTTTTTTTTT (my ans will be first True)
            
            if(func(mid, ar, m, k, n)==true)
            {
                ans = mid;
                high  = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        
        return ans;
        
        
        
    }
};