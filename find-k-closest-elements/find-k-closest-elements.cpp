class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int>ans;
        
      
        int n = arr.size();
        int mid = lower_bound(arr.begin(), arr.end(), x)- arr.begin();
//         int low = 0;
//         int high=n-1;
//         int mid;
//         while(low<=high)
//         {
//             mid = (low)+(high-low)/2;
            
//             if(abs(arr[mid])==x)
//             {
//                 break;
//             }
//             else if(arr[mid]<x)
//             {
//                 low = mid+1;
//             }
//             else
//             {
//                 high  = mid-1;
//             }
            
//         }
        
        
      int left = mid-1;
        int right = mid;
        
       while(k)
       {
           cout<<left<<" "<<right<<"\n";
           
           
          // if( (abs(arr[left]- x) <= abs(arr[right]-x) and (left>=0)) || (right>=n))
          // {
          //     left--;
          // }
           if( right >= arr.size() || (left >= 0 && x-arr[left] <= arr[right] - x) ) 
                left--;
           else
           {
               right++;
           }
       
          k--;
       }
     
        for(int i=left+1;i<right;i++)
            ans.push_back(arr[i]);
        
        
        return ans;
        
    }
};