class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size()<3)
            return false;
        
        int peak=-1;
        
        int n = arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                peak=i;
            }
            else
            break;
        }
        
        peak++;
        // cout<<arr[0]<<" "<<peak<<"\n";
       if(peak!=-1 and peak!=n-1 and peak!=0)
       {
            for(int i=peak;i<n-1;i++)
            {
                if(arr[i]>arr[i+1])continue;
                else
                    return false;
            }
           return true;
       }   
        
        return false;
        
        
        
        
    }
};