class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
      // fruits[i] is the type of fruit the ith tree produces.  
      // 2 baskets , each basket having single type of fruit 
      
        // pick exactly one fruit from every tree into the basket
        // reaching tree with fruit that cannot fit into baskets, stop 
        // return max number of fruits you canpick 
        
//         fruits = [1, 2, 1]
//         b1 = 1, 1
//         b2 = 2
//         maxfruits = 3
        
            
//         fruits = [1, 2, 3, 2, 2]
//         b1 = 1
//         b2 = 2, 2, 2
//         b3 = 3
//         maxfruits = 4
            
        // what if count all types of fruits , and take freq of max 2, which can give us maximum number of fruits? 
    // but this will not be valid, coz Once you reach a tree with fruit that cannot fit in your baskets, you must stop. 
        // example fruits = [1,2,3,2,2]
        // if you had started from 1 , then only type o fruits would be 1, 2   => which would lead to total of 2 fruits
        // if you started from 2, then fruits will be 2,3,2,2 
        // hence total types of fruits = 2, max fruits = 4 
        
        // so this means that picking up of fruits should also be continuos
        // which hints me about sliding windows
        // here varaible sized window is being considered
        
        
        int maxfruits=0;
        int left=0;
        int right=0;
        int n = fruits.size();
        
        map<int,int>mp;
        
        for(right=0;right<n; right++)
        {
            mp[fruits[right]]++;
            
            while(mp.size()>=3)
            {
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                {
                    mp.erase(fruits[left]);
                }
                left++;
            }
            
            maxfruits = max(maxfruits, right-left+1);
            
        }
        return maxfruits;
        
        
        
        
          
        
        
        
        
    }
};