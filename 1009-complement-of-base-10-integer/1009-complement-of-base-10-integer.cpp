class Solution {
public:
    int bitwiseComplement(int N) {
         if(N==0)return 1;
       
        
        int bits = log2(N)+1;
        
        int to_be_xored = (1<<bits)-1;
      
        return (to_be_xored)^N;
    }
};


// Number = 5
// Binary representation of 5 = 101
// Complement of binary representation = 010
// Decimal repesenattion of 010 = 2
    
// (101) ^ (X) = (101)

// NUmber of bits = 3
// 2^(number of bits) = 2^3 =8 = binary representation = 1000
// but i want 111 hence, 1000 -1 = 111
// becoz
// PROPERTY OF XOR := (NUM) ^ (1) = (COMPLEMENT OF THAT NUMBER)

