class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        // int ct=0;
        if(n==0)
            return false;
        
        while(n%2==0)
        {
            n/=2;
        }
        
        if(n==1)
            return true;
        else
            return false;
        
        
        
    }
};