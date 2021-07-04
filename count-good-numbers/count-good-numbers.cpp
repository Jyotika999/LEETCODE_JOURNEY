class Solution {
public:
    long long mod = 1000000007;
    long long expo(long long a, long long b)
    {
        long long res=1;
      
        while(b>0)
        {
            if(b&1) 
                res = ((res%mod) * (a%mod))%mod;
            a = ((a%mod) * (a%mod))%mod;
            b = b/2;
        }
        return res;
       
    }
    
    int countGoodNumbers(long long n) {
        
        long long e = n/2 + n%2;
        long long o = n/2;
        
     
        long long ans = (expo(5, e))%mod;
    
        ans  = ((ans%mod) * (expo(4, o)%mod))%mod;
   
        return ans;
    }
};


// 5 ^ (EVEN INDICES)  * 4^ (ODD INDICES)  THEN % MODULO 
// N = 1, EVEN = 1  -> (N+1)/2 = 1+1/2 = 1
// N = 2, EVEN = (N+1)/2 = (2+1)/2 = 3/2 = 1, ODD = 2/2 = 1
    
    


// n 
// odd = n/2
// even =  n/2 + n%2
    
// 5^(N/2+ N%2) * 4^(N/2)
    

