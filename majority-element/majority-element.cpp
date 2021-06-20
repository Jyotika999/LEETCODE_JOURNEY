class Solution {
public:
    
    int majorityElement(vector<int>& nums) {
    
        int n = nums.size();
        int ct=0;
        int me=0;
        
        
        // step 1 --> finding the majority element'
        for(int i=0;i<n;i++)
        {
             if(ct==0)
                me=nums[i];
            
            if(nums[i]==me)
                ct++;
            
            else
                ct--;
            
        }
        
        int temp=0;
        // step 2 --> verifying the majority element
        for(int i=0;i<n;i++)
        {
            if(nums[i]==me)
                temp++;
        }
        // if(temp>n/2)
        //     return me;
        // else
        //     return -1;
        
        return me;
    }
};