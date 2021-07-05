class Solution {
public:
    int mod = 1000000007;
    map<pair<long long , char>, long long>dp;
    
    long long int solve(int n, char ch)
    {
        if(n==1)
        {
            return 1;
        }
        if(dp[{n,ch}])
        {
            return dp[{n, ch}];
        }
        
        long long int res=0;
        
        if(ch=='a')
        {
            res= (solve(n-1, 'e'))%mod ;
        }
        else if(ch=='e')
        {
            res= (solve(n-1, 'a') + solve(n-1, 'i'))%mod;
        }
        else  if(ch=='i')
        {
            res= (solve(n-1, 'a') + solve(n-1, 'e') + solve(n-1, 'o') + solve(n-1, 'u') )%mod;
        }
        else if(ch=='o')
        {
            res= (solve(n-1, 'i') + solve(n-1, 'u'))%mod;
        }
        else if(ch=='u')
        {
            res= (solve(n-1, 'a') )%mod;
        }
        dp[{n, ch}]=res;
       return  res %mod;
        
    }
    
    int countVowelPermutation(int n) {
        
   //     memset(dp, -1, sizeof(dp));
        
      long long int a =   solve(n, 'a');
      long long int e =   solve(n, 'e');
      long long int i =   solve(n, 'i');
      long long int o =   solve(n, 'o');
      long long int u =   solve(n, 'u');
        
     int ans = (a+e+i+o+u)%mod;
     //   return dp[n]%mod;
        return ans;
    }
};



// // Each character is a lower case vowel ('a', 'e', 'i', 'o', 'u')
// // Each vowel 'a' may only be followed by an 'e'.
// // Each vowel 'e' may only be followed by an 'a' or an 'i'.
// // Each vowel 'i' may not be followed by another 'i'.
// // Each vowel 'o' may only be followed by an 'i' or  'u'.
// // Each vowel 'u' may only be followed by an 'a'.

// // a -> e
// // e -> a / i
// // i !-> i
// // o -> i / u
// // u -> a

