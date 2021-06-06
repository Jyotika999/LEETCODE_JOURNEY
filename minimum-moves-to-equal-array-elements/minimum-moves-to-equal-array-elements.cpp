class Solution {
public:
    int minMoves(vector<int>& nums) {
  
        int n = nums.size();
        
        int mini = INT_MAX;
        long long int moves=0;
        
        for(int i=0;i<n;i++)
        {
            mini = min( mini, nums[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=mini)
            {
                moves= moves + (nums[i]-mini);
            }
        }
        
        return moves;
    }
};