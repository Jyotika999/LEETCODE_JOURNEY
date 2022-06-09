class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
       // map<int,int>mp;
        vector<int>v;
        int low=0;
        int high=n-1;
        
        while(low<high)
        {
            if(nums[low]+nums[high]==target)
            {
               v.push_back(low+1);
                v.push_back(high+1);
                return v;
            }
            else if(nums[low]+nums[high]>target)
            {
                high--;
            }
            else
            {
                low++;
            }
            
        }
        
//         for(int i=0;i<n;i++)
//         {
//             if(mp[target-nums[i]])
//             {
//                 v.push_back(mp[target-nums[i]]);
//                 v.push_back(i+1);
//                 return v;
//             }
//             else
//             {
//                 mp[nums[i]]=i+1;
//             }
//         }
        
        
        return v;
    }
};