class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        // if(n==0)
        //     return 0;
        // if(n==1 && citations[0]!=0)
        //     return 1;
        
        int ans=0;
        int low=0;
        int high=n-1;
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            if(citations[mid]==(n-mid))
            {
                return citations[mid];
            }
            else if(citations[mid]<(n-mid))
            {
                low = mid+1;
            }
            else
            {
                high =mid-1;
            }
        }
        
        return n-low;
        
    }
};