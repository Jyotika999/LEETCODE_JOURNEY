class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char, int>freq;
        int n = s.length();
        queue<char>q;
        
        int low=0;
        int high=0;
        int maxi=0;
        
        while(high<n)
        {
            if(freq[s[high]]!=0)
            {
                // repeated character
                freq[s[low]]--;
                low++;
               
            }
            else
            {
                // non repeated character
                freq[s[high]]++;
              
                 maxi = max(maxi, high - low +1);
                  high++;
            }
        //    cout<<s.substr(low, high+1)<<"\n";
           
        }
        
        return maxi;
        
        
    }
};



// Longest Substring Without Repeating Characters

// SLIDING WINDOW PLUS HASH MAPS USE 
