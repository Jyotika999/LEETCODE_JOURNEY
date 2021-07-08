class Solution {
public:
    void moveZeroes(vector<int>& arr) {
         
  int n = arr.size();
  int ptr1 = 0;  //--> 0 
  int ptr2=0;    //--> !0
  
 
  while(ptr2<n)
  {
    
      if(arr[ptr2]!=0)
      {
        swap(arr[ptr1] , arr[ptr2]);
        ptr1++;
      }
      ptr2++;
        
  }
  
  
 // return arr;
    }
};