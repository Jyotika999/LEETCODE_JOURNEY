class Solution {
public:
    int brokenCalc(int x, int y) {
        
       if(x>=y)
           return (x-y);
        
        
        // even hai toh divide krdo 
       if(y%2==0)
       {
           return 1+ brokenCalc(x, y/2);
       }
        
        // odd hai toh plus 1 krke , pehle even bnayenge then divide krnege
       return 1+(brokenCalc(x, y+1));
        
        
    }
};