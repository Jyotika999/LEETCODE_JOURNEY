class Solution {
public:
    
    vector<vector<int>>all_subsets;
    
    void generate(vector<int>&nums, int i, vector<int>&subset)
    {
        if(i==(nums.size()))
        {
            all_subsets.push_back(subset);
            return;
        }
        
        
        // excluding this element
        generate(nums, i+1, subset);
        
        
        // including this element
        subset.push_back(nums[i]);
        generate(nums, i+1, subset);
        // now backtracking
        subset.pop_back();
        
        
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>subset;
        generate(nums, 0, subset);
        return all_subsets;
        
       
    }
};