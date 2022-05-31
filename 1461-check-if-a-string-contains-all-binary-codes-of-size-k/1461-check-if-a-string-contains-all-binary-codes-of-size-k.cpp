class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        set<string>str;
        int n = s.length();
        for(int i=0;i<n-k+1;i++)
        {
            string sb = s.substr(i, k);
            // cout<<sb<<"\n";
            str.insert(sb);
        }
        
        if(str.size()==pow(2, k))
            return true;
        else
            return false;
    }
};



// k length substring 
// all 0,1 combinations 
// 2^k to generate all possible binary codes of length  k

// then check if its possible to have substrings of length n with all 2^k substrings 
// or maybe store all possible substrings of k length and store in a set, at the end if the size of set = number of possible binar code lengths k 
// then true 
// else return false

// hence no need even to generate all possible binary codes of length k 





