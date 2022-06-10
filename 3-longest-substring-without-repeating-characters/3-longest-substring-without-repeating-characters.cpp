class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        int start = 0;
        int end = 0;
        unordered_map<char, int>mp;
        int maxlen =0;
        
        while(start<=end and end<n)
        {
            mp[s[end]]++;
            while(mp[s[end]]>=2 and start<=end)
            {
               mp[s[start]]--;
                start++;
            }
            // cout<<start<<" "<<end<<"\n";
            maxlen = max(maxlen, end-start+1);
            end++;
            
        }
        return maxlen;
        
//         abcabc
//         start =0, end=0, mp[a]=1, maxlen = 1
//         start=0, end=1, mp[b]=1, mp[a]=1, maxlen = 2
//         start=0, end=2, mp[c]=1, mp[b]=1, mp[a]=1, maxlen = 3
//         start=0, end=3, mp[c]=1, mp[b]=1, mp[a]=2, 
//         start=1, end=3, mp[c]=1, mp[b]=1, mp[a]=1, maxlen = 3
            
            
        
        
        
    }
};


// abcabcbb
// a, b, c,  cab, cabc, 
// abc
// length = 3

// max length

// brute force, 
// trying all possible subtrings
// and checking each substring if it is valid or not
// o(n^2 * n) = o(n^3)
    

// start=0, end=0;
// len = end- start+1

// while(start<n)
// {
//     if substring between start and end , 
//     if valid = compute max length
//     if not valid, shift start pointer ahead 
// checking  validity, using map , frequency, unordered map 
            
// }
// O(n)
    
    

