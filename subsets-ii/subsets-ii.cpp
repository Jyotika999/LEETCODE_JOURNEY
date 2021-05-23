class Solution {
public:
    
    // 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        vector<vector<int>>all_subsets;
        
        int subsetmask_size = 1<<n;
        for(int subsetmask =0; subsetmask< subsetmask_size ; subsetmask++)
        {
            vector<int>subset;
            for(int j=0;j<n;j++)
            {
                if(subsetmask & (1<<j))
                {
                    subset.push_back(nums[j]);
                }
            }
            
            if( find(all_subsets.begin(), all_subsets.end(), subset)==all_subsets.end() ) 
            all_subsets.push_back(subset);
        }
        
        sort(all_subsets.begin(), all_subsets.end());
        return all_subsets;
        
        
    }
};