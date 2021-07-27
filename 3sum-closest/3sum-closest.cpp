class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    
        sort(nums.begin(), nums.end());
        
        int len = nums.size();
        long long int res = nums[0]+nums[1]+nums[len-1];   // take care over here 
        for(int i=0;i<len;i++)
        {
            int low = i+1;
            int high = len-1;
            
            while(low<high)
            {
                int sum = nums[i] + nums[low] + nums[high];
                
                if(sum== target)
                    return sum;
                if(abs(sum-target)< abs(target - res))
                {
                    res = (sum);
                }
                if(sum<target)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
        }
        
        return res;
        
        
        
    }
};

// a+b+c <mini 
// mini update 


// if( sum < mini)
//     low++
//     else
//         high--