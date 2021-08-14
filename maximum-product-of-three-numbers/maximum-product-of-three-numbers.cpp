class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int prev = nums[0]*nums[1]*nums[2];
        int next = nums[n-1]*nums[n-2]*nums[n-3];
        int mix = nums[0]*nums[1]*nums[n-1];
        
        return max(prev, max(next, mix));
        
        
        
    }
};