class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     
        int n = nums.size();
        int i=0;
        int j=0;
        int sum=0;
        int count=0;
//         for(j=0;j<n;j++)
//         {
//             sum+=nums[j];
            
//             while(sum>k and i<j)
//             {
//                 sum-=nums[i];
//                 i++;
//             }
//             if(sum==k)
//                 count++;
//         }
        unordered_map<int,int>freq;
        
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            if(sum==k)
                count++;
            if(freq[sum-k])
                count+=freq[sum-k];
            
            freq[sum]++;
        }
        
        return count;
        
        
    }
};