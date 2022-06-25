class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        
        int len = s.length();
        int cost=0;
        int maxlen=0;
        int left=0;
        int right=0;
        
        for(right=0;right<len;right++)
        {
            if(s[right]!=t[right])
            {
                cost+= abs(s[right]-t[right]);
            }
            while(cost>maxCost)
            {
                cost-= abs(s[left]-t[left]);
                left++;
            }
            maxlen = max(maxlen, right-left+1);
            
        }
        return maxlen;
        
        
        
        
    }
};


// s and t of same length 
// s-> t 
// s[i]  ->  t[i]   = cost => abs(s[i]-t[i])
// maxlen of substring of s  = t, with cost <= maxcost

// maximum length find krni h
// substring = continous 
// cost<= maxcost
// variable window size 

// s = "abcd", t = "bcdf", maxCost = 3
// only corresponding characters need to be changed
// abc -> bcd 
// cost = 3


    
    
    
    
    
    
