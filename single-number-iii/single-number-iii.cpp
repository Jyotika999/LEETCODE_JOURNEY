class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans;
        
        int set=0;
        int unset=0;
        
        int xorr = 0;
        
        for(int i=0;i<n;i++)
        {
            xorr = xorr ^ nums[i];
        }
        
        int lastbit=1;
        
        while(!(lastbit &xorr)) // finding first bitpostion from left where 1 come
            lastbit<<=1;
        
        for(int i=0;i<n;i++)
        {
            if( lastbit & nums[i])
            {
                set = set ^ nums[i];
            }
            else
            {
                unset = unset ^ nums[i];
            }
        }
        
        ans.push_back(set);
        ans.push_back(unset);
        
        return ans;
    }
};