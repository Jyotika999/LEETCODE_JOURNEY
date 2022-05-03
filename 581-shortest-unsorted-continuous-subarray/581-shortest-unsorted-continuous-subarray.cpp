class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int>org(nums.begin(), nums.end());
        
        sort(org.begin(), org.end());
        
        int n = nums.size();
        int index1 = -1;
        int index2 = -1;
        for(int i=0;i<n;i++)
        {
            if(org[i]!=nums[i]){
                index1 = i;break;}
        }
          for(int i=n-1;i>=0;i--)
        {
            if(org[i]!=nums[i]){
                index2 = i;break;}
        }
        if(index2==index1)
            return 0;
        
        return (index2-index1+1);
    }
};