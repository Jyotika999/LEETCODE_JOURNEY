class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       
        if(k<=1)
            return 0;
        int count =0;
        int n = nums.size();
        
        int pro=1;
        
        int low=0;
        int high=0;
        
        while(high<n)
        {
            pro = pro*nums[high];
            
            while(pro>=k)
            {
                pro = pro/nums[low];
                low++;
            }
            //high++;
            count+= high-low+1;
           // cout<<high<<" "<<low<<"\n";
            high++;
        }
        
        
        return count;
        
    }
};