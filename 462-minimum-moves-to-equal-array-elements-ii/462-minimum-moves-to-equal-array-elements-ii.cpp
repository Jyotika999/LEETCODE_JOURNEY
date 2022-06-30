class Solution {
public:
    int minMoves2(vector<int>& nums) {
     
        sort(nums.begin(), nums.end());
        
        int md = 0;
        int n = nums.size();
        
        // if(n%2!=0)
        // {
            // md = (n/2)+1;
        // }
        // else
        {
            md = (n/2);
        }
        
//         [1,1,1]
        
        // cout<<md<<"\n";
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=abs(nums[i]-nums[md]);
        }
        return sum;
        
    }
};


// 1, 2, 9, 10
    
// median = 2, 
// 1 + 0 + 7 + 8 = 16 