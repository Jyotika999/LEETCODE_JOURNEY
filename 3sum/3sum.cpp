class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
         sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>s;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            int low=i+1;
            int high = n-1;
            while(low<high)
            {
               int sum = nums[i]+nums[low]+nums[high];
                if(sum==0)
                {
                    if(s.find({nums[i],nums[low],nums[high]})==s.end())
                    {s.insert({nums[i],nums[low],nums[high]});
                     ans.push_back({nums[i],nums[low],nums[high]});}
                    low++;
                    high--;
                }
                if(sum<0)
                {
                    low++;
                }
                if(sum>0)
                {
                    high--;
                }
            }
            
        }
        
        
        return ans;
        
    }
};