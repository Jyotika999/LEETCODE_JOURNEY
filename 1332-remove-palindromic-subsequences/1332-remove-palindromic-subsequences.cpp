class Solution {
public:
    int removePalindromeSub(string s) {
        
        string org  = s;
        reverse(org.begin(), org.end());
        
        if(org==s)
            return 1;
        else
            return 2;
        
    }
};


// only containing a and b characters
// remove palindromic subsequence
// subsequence means that this can be uneven, which means it can be discontinous
// removing a palindromic subaequqnce from s
// we need to remove whole string, 
// example : string = ababa
// remove all in 1 operation delete whole subsequence

// example : string = abb
// remove bb then remove a , hence 2 operations

// example : baabb
// remove bbb, aa
// this is an easy question, since we have only two characters , so at max you can form 2 subsequences of the form aaaaaaa....  and bbbbb....
// but this is the maximum count
// incase whole string is already palindrome then you need 1 operation
// but if original string is not palindrome, then you need 2 operations

// hence, the conclusion is that if already palindrome then return 1
// else return 2