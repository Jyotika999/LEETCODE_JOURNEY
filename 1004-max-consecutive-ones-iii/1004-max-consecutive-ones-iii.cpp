class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int zero=0;
        
        int left=0;
        int right=0;
        int len=0;
        int n = nums.size();
        for(right=0;right<n;right++)
        {
            if(nums[right]==0)
                zero++;
            
            while(left<=right and zero>k)
            {
                if(nums[left]==0)
                {
                    zero--;
                }
                left++;
            }
            
            
            len = max(len, right-left+1);
        }
        return len;
        
    }
};



// binary array = 0, 1
// ineteger k 
// max number of consecutive 1, after flipping atmost k 0
// count of 0 to flip <=k 

// continuos subarray, k , maximum == pattern sliding window 
// (variable sized window)
// nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
//         1 2 3 0 0 0 1 2 3 4 0 , without fliping = 4 ones
//         1,1,1,1,1,0,1,1,1,1,0, ones = 5 
//         1,1,1,0,1,1,1,1,1,1,1 , ones = 7 
       
//     for(j=0; j<n; j++)
//     {
//         if(ar[j]==1)
//             ct++
            
//             while(ct(zero)>k)
//             {
//                 ct(zero)--
//             }
//         // good 
//         // all ones
//         len = max(len, j-i+1)
//     }








    