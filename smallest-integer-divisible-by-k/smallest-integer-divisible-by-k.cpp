class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int remainder = 0;
        // if(k%2==0 || k%5==0){
        //     return -1;
        // }
        for (int length_N = 1; length_N <= k; length_N++) {
            remainder = (remainder * 10 + 1) % k;
            if (remainder == 0) {
                return length_N;
            }
        }
        return -1;
}

};