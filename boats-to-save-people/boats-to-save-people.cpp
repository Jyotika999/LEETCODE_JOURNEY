class Solution {
public:
    
    
    bool valid(vector<int>&ar, int limit, int boats)
    {
        int i=0;
        int sum=0;
        int p=0;
        int b=1;
        int n = ar.size();
        for(int i=0;i<n;i++)
        {
             if(boats==2)
            {
                cout<<boats<<" "<<ar[i]<<"\n";
            }
            if(sum+ar[i]<=limit and p<=2)
            {
                sum = sum+ar[i];
                p++;
                
            }
            else
            {
              
                    sum = ar[i];
                    p=1;
                    b++;
                
            }
         //   i++;
        }
        
       
        if(b<=boats)
            return true;
        else
            return false;
        
        
        
    }
    
    int numRescueBoats(vector<int>& people, int limit) {
        
        int n = people.size();
        sort(people.begin(), people.end());
        
        int low=0;
        int high=n-1;
        int ans=0;
        
        while(low<=high)
        {
            ans++;
            if(people[low]+people[high]<=limit)
                low++;
            high--;
        }
        return ans;
//         int low=1;
//         int high=1e9;
//         int ans = 1e9;
        
//         while(low<=high)
//         {
//             int mid = (low+high)/2;
//           //  cout<<mid<<"\n";
//             if(valid(people, limit, mid)==true)
//             {
//                  cout<<mid<<"\n";
//                 ans = min(ans, mid);
//                 high = mid-1;
//             }
//             else
//             {
//                 low = mid+1;
//             }
//         }
        
//         return ans;
        
    }
};