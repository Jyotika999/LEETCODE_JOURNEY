

// MINIMUM JUMPS TO REACH END VARIATION

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        
        int n = nums.size();
        int reach =0;
        
        for(int i=0;i<n-1;i++)
        {
           if(i>reach)
               break;
            reach = max(reach, i + nums[i]);
           //  cout<<i<<" "<<nums[i]<<" "<<reach<<"\n";
            
        }
        
        if(reach>=(n-1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};