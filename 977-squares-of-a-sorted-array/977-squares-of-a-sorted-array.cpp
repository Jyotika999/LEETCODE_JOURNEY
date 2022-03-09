class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        // array is already sorted
        // square of each number will be stored according to the order of their absolute values
        // so depending upon the absoulte value of each integer
        // we have to order them 
        
        // if abs(a) > abs(b), i know a will always be at back
        // but can i cmnt that b will be infront?
        // no because there might be elements later than b having smaller absolute values than b
        // so one thing is clear 
        // that the maximum absolute values lay at either of the ends
        // maximum element will be at left end if sequence is [-10, 0, 1, 2]
        // maximum element will be at right end if sequnce is [-1, 0, 12, 14]
        // so this is clear that maximum element can be at either ends, so i can start filling the ends first of all 
        
        
        int low=0;
        int high=nums.size()-1;
        vector<int>ans(nums.size(), 0);
        int i=high;
        while(low<=high)
        {
            if(abs(nums[low])>nums[high])
            {
                ans[i]=nums[low]*nums[low];
                i--;
                low++;
            }
            else
            {
                ans[i]=nums[high]*nums[high];
                i--;
                high--;
            }
        }
        return ans;
        
        
    }
};