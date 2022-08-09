class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        int n = nums.size();
        int i=0;
        vector<int>ans;
        while(2*i<n)
        {
            int ff = nums[2*i];
            int val = nums[2*i+1];
            
            for(int f=1;f<=ff;f++)
            {
                ans.push_back(val);
            }
            i++;
        }
        return ans;
    }
};