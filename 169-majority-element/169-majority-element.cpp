class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
        stack<int>s;
        
        for(int i=0;i<n;i++)
        {
            if(s.empty())
                s.push(nums[i]);
            else
            {
                if(s.top()!=nums[i])
                    s.pop();
                else
                    s.push(nums[i]);
            }
                
        }
        return s.top();
    }
};


// [3,2,3]
// n= 3
// n/2 = 1
// freq[element] > 1
// element = 3


// [2,2,1,1,1,2,2]
// n = 7
// n/2 = 3
// freq[element] >3
// elememnt = 2
    
// sol1 
// for( i = 0,...n)
//     for(j = i+1 ....n)
//         if(nums[j] == nums[i])
//             ct++
            
//     if(ct>n/2)
//         return nums[i]
        
// time complexity, O(N^2)
// space complexity  O(1)
        
// sol2
// unordered_map = to store freq of each element

// for( element in nums)
//     freq[element]++
//     if(freq[element]>n/2)
//         return element

// time complexity , O(n)
// space complexity , O(n)
        
        
// [2,2,1,1,1,2,2]
// [1,1,1,2,2,2,2] , majr ele = 2

// [2,2,1,1,1,1,2]
// [1,1,1,1,2,2,2] , maj ele = 1
        
// [3,2,3]
// [2,3,3] , majr ele = 3

// [3,3,3,2,2,1,3]
// [1,2,2,3,3,3,3], majr ele = 3


// sort whole array = NLOGN

// traverse array = O(N)
//     count freq using variablr = O(1)
//     if(freq> n/2)  = O(1)
//         return 
//  time = O(nlogn) + O(N*1*1) = O(nlogn)
// space = O(1)
        
   
// without traversal
// time : O(nlogn)
// space : O(1)

  
// [2,2,1,1,1,2,2]
// //  prev , next
// //  prev = 2, next =2,      maj = 2
// //  prev=2, next=1, 
 
 
 
// majr ele = 2, i=0, ct++ = 1
// maj ele = 2, i=1, ct++ =2
// majr ele = 2, i=2, ele = 1, ct-- = 1
// majr ele = 2, i=3, ele = 1, ct-- = 0 , majr ele = 1
// majr ele  = 1, i=4, ele = 1, ct++= 1, majr ele = 1
// majr ele = 1, i=5, ele = 2, ct--= 0, majr ele = 2
// majr ele = 2, i=6, ele = 2, ct++=1, majr ele = 2
//               i=7, maj ele = 2 
    



    

    
    