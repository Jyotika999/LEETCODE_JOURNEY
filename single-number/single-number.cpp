class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        int value = 0;
        for(int i=0;i<n;i++)
        {
            value = value^nums[i];
        }
        
        return value;
        
    }
};