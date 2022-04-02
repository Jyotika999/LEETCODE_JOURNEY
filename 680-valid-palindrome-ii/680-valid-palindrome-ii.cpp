class Solution {
public:
    
    bool palindrome(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        // 1 deletion = you cant change the order of the string if you delete one character 
        // hence checking of charcaters count i.e even number of characters and odd number of characters wont work
        
        // also, actually deleting the current character and then checking further, 
        // this also, wont work since excliding the ith element, and then checking that if you actually delete this current character and then check if it is palindrome or not, 
        // then it will give a worst case time cpmplexity of O(N^2)
        // hence tle 
        
        
        // 0 deletion = already a palindrome 
        
        // so basically we need to check via 2 pointer approach, and check if current characters are equal then move your pointers further, else , if there is a mismatch , you can delete only one character 
        // lets say your 2 pointers were at i and j 
        // then if(s[i] != s[j])
        //     then delete either i th character and check if (i+1, j) is a palindrome 
        //     then delete either j th character and check if (i, j-1) is a palidrome 
        
        int n=s.length();
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                if(palindrome(s, i+1, j) || palindrome(s, i, j-1))
                    return true;
                else
                    return false;
            }
        }
        
        // processed the whole string, hence it was a paldrome 
        return true;
        
    }
};