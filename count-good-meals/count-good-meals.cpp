class Solution {
public:
    int countPairs(vector<int>& d) {
        
          
        unordered_map<int,int>mp;
        
        long long int ct=0;
        int n = d.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j =1; j<=(1<<22);j*=2)
            {
                
                if(mp.count(j-d[i]))
                {
                    ct+= mp[j-d[i]];
                }
            }
            mp[d[i]]++;
        }
        
        return ct%(1000000007);
    }
};


// a + b = power of 2 
//             number of good meals?
          

// [1,3,5,7,9]
// 1 + 3 = 4 
// 1 + 7 = 8
// 3 + 5 = 8
// 7 + 9 = 16
//     ans = 4 