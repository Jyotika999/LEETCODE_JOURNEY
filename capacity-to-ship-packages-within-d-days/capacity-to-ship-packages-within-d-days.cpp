	// ARRAY OF SIZE N
	// COMPLEXITY : O(NLOGM)
	// MINIMUM NIKALNA HAI KUCH
	// PREDICATE FUNCTION PATTERN WILL BE OF THE FORMAT : ......FFFFFFFTTTTTTTTT.......
	


class Solution {
public:
    
    
//     bool valid(int dailywt, vector<int>&weights, int days, int n)
//     {
//         int reqd_days=1;
//         int prev=0;
//         for(int i=0;i<n;i++)
//         {
//             if(prev+weights[i] > dailywt)
//             {
//                 reqd_days++;
//                 prev= 0;
//             }
//             prev+= weights[i];
//         }
        
//         cout<<dailywt<<" "<<reqd_days<<" "<<days<<"\n";
//         if(reqd_days <= days)
//             return true;
//         else
//             return false;
        
//     }
    bool isvalid(vector<int> &weights,int days,int curr_ans){
        int days_now=1;
        int curr_wt=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>curr_ans)return false;
            
            if(curr_wt+weights[i]>curr_ans){
                curr_wt=weights[i];
                days_now++;
                if(days_now>days)return false;
            }
            else{
                curr_wt+=weights[i];
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size();
        
        int high=0;
        for(int i=0;i<n;i++)
            high+= weights[i];
        
        int low=0;
     //   int high= 50000;
        int ans=0;
        
        while(low<=high)
        {
               int mid = (low)+(high-low)/2;
                if(isvalid( weights, days, mid)==true)
                {
                    ans  = mid;
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
        }
        
        return ans;
        
        
        
        
    }
};