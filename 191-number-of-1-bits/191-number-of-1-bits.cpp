class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int ct=0;
        
        for(int k=0;k<32;k++)
        {
            if((1<<k) & (n))
                ct++;
        }
        return ct;
        
    }
};