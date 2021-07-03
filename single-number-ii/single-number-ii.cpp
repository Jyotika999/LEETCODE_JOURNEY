class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
      int n =  nums.size();
      int ans=0;
        int ones=0;
        int twos=0;
      for(int i=0;i<n;i++)
      {
          int ele = nums[i];
          
          ones = (ones^ele) & ~(twos);
          twos = (twos^ele) & ~(ones);
      }
        return ones;
    }
};

// First time number appear -> save it in "ones"

// Second time -> clear "ones" but save it in "twos" for later check

// Third time -> try to save in "ones" but value saved in "twos" clear it.