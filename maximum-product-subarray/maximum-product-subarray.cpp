class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int curmax= nums[0];
        int curmin= nums[0];
        int prevmax= nums[0];
        int prevmini= nums[0];
        
        int ans=nums[0];
        int n = nums.size();
        
        for(int i=1;i<n;i++)
        {
            curmax = max( prevmax*nums[i], max(prevmini*nums[i], nums[i] ) );
            curmin = min( prevmini*nums[i], min( prevmax*nums[i] , nums[i]));
            
            ans = max(curmax, ans);
            
            prevmax = curmax;
            prevmini = curmin;
            
        }
        
        return ans;
        
    }
};