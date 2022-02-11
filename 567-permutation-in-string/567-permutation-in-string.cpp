class Solution {
public:
    
    
    bool check(map<char, int>temp, map<char,int>mp)
    {
        for(auto it : mp)
        {
            int ff = it.first;
            int ss = it.second;
            
            if( temp[ff]!=ss)
            return false;
        }
        
        
        return true;
    }
	
	   
	    
	    
    bool checkInclusion(string pat, string txt) {
        // another variation of chekcing anagram 
        // which is like usually done using sliding window technique 
        
    
	    int k = pat.size();
	    int n = txt.size();
	    int i =0;
	    int j =0;
	    int ct=0; // temporary variable to stor the count of occurences of anagrams
	    
	    // creating a map to count the frequency of each character in the pattern
	    map<char, int>mp;
	    
	    for(int i=0;i<k;i++)
	    {
	        mp[ pat[i] ]++;
	    }
	    
	    map<char, int>temp;
	    
	    while(j<n)
	    {
	        temp[txt[j]]++;
	        if(j-i+1 <k)
	        {
	            j++;
	         //   temp[txt[j]]++;
	          //  mp[ txt[j]]--;
	        }
	        else if(j-i+1 ==k)
	        {
	            // check if the current window size is representing anagram of pattern string
	            if( check(temp, mp)==true)
	            ct++;
	            
	            temp[txt[i]]--;
	            j++;
	            i++;
	        }
	    }
	    
	    
	    if(ct)return true;
        else return false;
        
        
        
        
        
        
        
    }
};