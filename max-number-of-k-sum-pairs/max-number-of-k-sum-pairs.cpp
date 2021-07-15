class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        map<int, int>mp;
        int ct=0;
        
        for(int i=0;i<n;i++)
        {
            int cur = nums[i];
            int search = k - nums[i];
            
            if(mp[search])
            {
                ct++;
                mp[search]--;
            }
            else
            {
                mp[cur]++;
            }
        }
        
        return ct;
        
    }
};




// nums = [1,2,3,4], k = 5
//     4 +1 = 5 remove 4, 1
//     array = [2, 3]
//     2 +3 = 5 
//     remove 2, 3
//     array = []
    
// nums = [3,1,3,4,3], k = 6
//     3  + 3 = 6
//     array = 1, 4, 3


// breute force :
// for(i =0 ; i < n ; i++)
// {
//     for(j=i+1; j<n; j++)
//     {
//         if( ele(i) + ele(j) ==k also unvisited )
//         {
//             vis[i] = true
//             vis[j] = true
//             i=0
//         }
//     }
// }

// val ct    
// 1 = 1
// 3 = 3
// 4 = 1 
    
// cur ele 
// target - cur ele 

// if found 
// hash ( target - cur ele ) --

// else
// hash ( cur ele )++







