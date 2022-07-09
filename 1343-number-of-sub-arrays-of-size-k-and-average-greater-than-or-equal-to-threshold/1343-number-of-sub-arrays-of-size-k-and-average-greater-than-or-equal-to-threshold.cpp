class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int count=0;
        
        int n = arr.size();
        int i=0;
        int j=0;
        int sum=0;
        
        for(j=0;j<n;j++)
        {
            sum+= arr[j];
            
            if(j-i+1==k)
            {
                if((sum)>=(threshold*k))
                    count++;
                
                sum-=arr[i];
                i++;
            }
            
        }
          return count;
    
    }
};