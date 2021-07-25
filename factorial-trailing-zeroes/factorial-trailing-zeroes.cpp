class Solution {
public:
    int trailingZeroes(int n) {
        
        int count=0;
        int base = 5;
        
        while(floor(n/base)!=0)
        {
            count = count + floor(n/base);
            base = base*5;
        }
        
        return count;
        
    }
};