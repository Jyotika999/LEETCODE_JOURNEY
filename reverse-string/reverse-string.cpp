class Solution {
public:
     
    void solve(vector<char>&s, int left, int right)
    {
        if(left>=right)
            return;
        
        swap(s[left], s[right]);
        solve(s, left+1, right-1);
    }
    
    
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        int left =0;
        int right = n-1;
        solve(s, left, right);
        
        
        
    }
};