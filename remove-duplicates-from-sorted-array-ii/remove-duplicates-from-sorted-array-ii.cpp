class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n = nums.size();
    
    if(n==0 || n==1 || n==2)
    return n;
    
    int ct=1;
    int ind =-1;
    
    for(int i=n-1;i>=2;i--)
    {
        if((nums[i]==nums[i-1]) && (nums[i]==nums[i-2]))
        {
         
          nums.erase(nums.begin()+i);   
       //   nums.erase(nums.begin()+i-1);
        }
      
        
    }
    
    return nums.size();
    
    }
};