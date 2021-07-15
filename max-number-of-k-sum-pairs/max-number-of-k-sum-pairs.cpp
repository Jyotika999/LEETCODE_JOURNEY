class Solution {
public:
    int maxOperations(vector<int>& num, int k) {
        
         // two pointer approach
//         int ct=0;
//         int i = 0;
//         int n = nums.size();
//         int j = nums.size()-1;
        
//         sort(nums.begin(), nums.end());
        
        
//         while(i<j and i>=0 and j<n)
//         {
//             cout<<i<<" "<<j<<" "<<nums[i]<<" "<<nums[j]<<"\n";
//             if(nums[i]+nums[j]== target)
//             {
               
//                 ct++;
//                 i++;
//                 j--;
//             }
//             else if(nums[i] + nums[j] < target)
//             {
//                  i++;
//             }
//             else
//             {
//                 j--;
//             }
//         }
        
        
         sort(num.begin(), num.end());
      int ans = 0;
      int i=0, j=num.size()-1;
      while(i < j){
        if(num[i] + num[j] == k){     // found elements just increase counter
          ans++; i++; j--;
        } 
		else if(num[i] + num[j] > k) j--;  // sum is large so decrease the bigger element, i.e. jth element
        else i++;    // sum is small so increase the smaller element, i.e. ith element
      }
      return ans;
        
       
        
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







