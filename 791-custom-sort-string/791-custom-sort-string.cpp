
 unordered_map<char,int>freq;
  

class Solution {
public:
    
     
    static bool cmp(char &a, char &b)
    {
        return (freq[a]<freq[b]);  // ascending order 
    }
    string customSortString(string order, string str) {
        
        int n_str = str.length();
        int n_order = order.length();
        
        for(int ch=0;ch<n_order;ch++)
        {
            freq[order[ch]] = ch+1;
        }
        
        sort(str.begin(), str.end(), cmp);
        return str;
        
    }
};


// s = "abcd"
    
// order = c < b < a
// map<char, int> hash 

// hash[c]=1
// hash[b]=2
// hash[a]=3
// hash[d]=0
// dcba 









