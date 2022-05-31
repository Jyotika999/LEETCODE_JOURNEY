class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
    
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        if(n<3)
            return 0;
        
        // remember only returning the largest possible sides , will not return the largest perimeter of the triangle
        // since you need to remember that sum of two sides should be greater than the third side 
        // so when nums=[1, 2, 1]
        // if you dont take care of this condition, then it will return 4 
        // but no such triangle is possible 
        // since 1+1 = 2 is not greater than  2
        // hence largest possible perimter = 0 
        
        for(int i=n-3;i>=0;i--)
        {
            if(nums[i]+nums[i+1]>nums[i+2])
                return nums[i]+nums[i+1]+nums[i+2];
        }
        return 0;
        
    }
    
};