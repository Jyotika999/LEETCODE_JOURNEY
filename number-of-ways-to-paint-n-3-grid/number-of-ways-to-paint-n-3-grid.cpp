class Solution {
public:
    
    // two (i+1) = 2*three(i) + 3*two(i)
    // three(i+1) = 2*three(i) + 2*two(i)
    
    
    int numOfWays(int n) {
        
        long long int c2 = 6;
        long long int c3 = 6;
        
        long long int mod = 1e9+7;
        
        for(int i=2;i<=n;i++)
        {
            long long int three = c3;
            long long int two = c2;
            
            c2 = (2*three + 3*two)%mod;
            c3 = (2*three + 2*two)%mod;
            
        }
        return (c2+c3)%mod;
        
        
    }
};