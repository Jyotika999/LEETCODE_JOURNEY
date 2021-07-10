class Solution {
public:
    
    bool vowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            return true;
        else
            return false;
    }
    void solve(string &s, int left, int right)
    {
        if(left>=right)
            return;
        
        if(vowel(s[left]) and vowel(s[right]))
        {
            swap(s[left] , s[right]);
            left++;
            right--;
        }
        else if(vowel(s[left]))
        {
            right--;
        }
        else if(vowel(s[right]))
        {
            left++;
        }
        else
        {
            left++;
            right--;
        }
        
        solve(s, left, right);
        
    }
    
    string reverseVowels(string s) {
        
        int n = s.length();
        solve(s, 0, n-1);
        return s;
    }
};