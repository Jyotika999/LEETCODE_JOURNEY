class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        
        int n = nums.size();
        int sum=0;
        
        for(int i=0;i<(1<<n);i++)
        {
            int xorr=0;
            for(int j=0;j<n;j++)
            {
                if(i & (1<<j))
                {
                    xorr^= nums[j];
                }
            }
           // cout<<xorr<<"\n";
            sum+= xorr;
        }
        return sum;
        
        
        
    }
};