class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        // odd indices , sort in decreasing order
        // even indices, sort in increasing order
        
        int n = nums.size();
        priority_queue<int>odd;
        priority_queue<int, vector<int>, greater<int>>even;
        
        for(int i=0;i<n;i++)
        {
            if(i&1)
            {
                odd.push(nums[i]);
            }
            else
            {
                even.push(nums[i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(i&1)
            {
                nums[i] = odd.top();
                odd.pop();
            }
            else
            {
                nums[i] = even.top();
                even.pop();
            }
        }
        return nums;
    }
};