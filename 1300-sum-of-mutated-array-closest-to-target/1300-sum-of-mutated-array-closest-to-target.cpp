class Solution {
public:
    int func(int mid, vector<int>&arr, int target)
    {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>mid)
            {
                sum+=mid;
            }
            else
                sum+=arr[i];
        }
        return abs(sum);
    }
    
    int findBestValue(vector<int>& arr, int target) {
        
         
        int n = arr.size();
        int low=0;
        int high=1e5+5;
        int ans=INT_MAX;
        int sum=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxi = max(maxi, arr[i]);
        }
        sum = abs(sum-target);
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            int cur = func(mid, arr, target);
           
            
            // if (cur==target)
            // {
                  // ans=mid;
                  // break;
            // }
            if(cur<target and mid<maxi)
            {
                // sum=func(mid, arr, target);
               
                low=mid+1;
            }
            else 
            {
                high=mid-1;
            }
            
            if(abs(cur-target)<sum)
            {
                ans=mid;
                sum = abs(cur-target);
            }
            else if(abs(cur-target)==sum)
            {
                ans = min(ans, mid);
            }
            
            
        }
        return ans;
        
    }
    
};