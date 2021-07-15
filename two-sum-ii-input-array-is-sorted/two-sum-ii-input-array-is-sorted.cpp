class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        
        vector<int>ans;
        
        int n = num.size();
        
        int low =0;
        int high = n-1;
        
        while(low<high)
        {
            if(num[low]+ num[high] == target)
            {
                ans.push_back(low+1);
                ans.push_back(high+1);
                return ans;
            }
            else if(num[low]+ num[high] < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        
        return ans;
        
    }
};