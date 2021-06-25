class Solution {
public:
    
    
    bool increasingTriplet(vector<int>& nums) {
        
        int n = nums.size();
        
        int rightmax[n+1];
        rightmax[n-1]= nums[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i] = max(rightmax[i+1], nums[i]);
        }
        
        set<int>s;
        s.insert(nums[0]);
        
        for(int i=1;i<n-1;i++)
        {
            if(rightmax[i+1] > nums[i])
            {
                auto it = s.lower_bound(nums[i]);
                it--;
                cout<<*it<<"\n";
                if(*it < nums[i])
                    return true;
            }
            s.insert(nums[i]);
        }
        
        return false;
    }
};