class Solution {
public:
    
//     int solve(vector<int>&arr, int i, int n, int sum)
//     {
//         if(i==n)
//         {
//             return 0;
//         }
//         if(arr[i]<=sum)
//         {
//             // inlcude
//             int include = 1+solve(arr, i+1, n, sum-arr[i]);
//             // exclude
//             int exclude = solve(arr, i+1, n, sum);
//             return include+exclude;
//         }
//        else
//            return 0;
        
        
//     }
    bool solve(vector<int>&nums, int ind, int &n, int &sum, vector<int>&sides)
    {
        if(ind==n)
        {
            for(int i=0;i<3;i++)
            {
                if(sides[i]!=sides[i+1])
                    return false;
            }
            return true;
        }
        
        for(int i=0;i<4;i++)
        {
            if(nums[ind]+sides[i]<=sum)
            {
                sides[i]+= nums[ind];
                if(solve(nums, ind+1, n, sum, sides))
                    return true;
                sides[i]-=nums[ind];
            }
        }
        return false;
        
    }
    
    bool makesquare(vector<int>& matchsticks) {
        
        int sum=0;
        int n = matchsticks.size();
        
        sort(matchsticks.begin(), matchsticks.end(), greater<int>());
        
        for(int i=0;i<n;i++)
        {
            sum+= matchsticks[i];
        }
        if(sum%4!=0)
            return false;
        else
        {
            // can we split the array into four equal halves 
            // 1, 1, 2, 2, 2
            // [1,1] , [2], [2], [2]
            // yes , we can split the whole array into 4 equal halves
            // checking if number of subsets to make sum = totalsum/4 
            // we need to keep track of length of each side of sqaure 
            // or we could simply count number of subsets with sum==sum/4
            // cout<<sum/4<<" ";
            vector<int>sides(4, 0);
            sum/=4;
            bool ans = solve(matchsticks, 0, n, sum, sides);
            // cout<<ans<<"\n";
            return ans;
            
        }
        
     
    }
};