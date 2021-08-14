class Solution {
public:
    
    // CATALAN NUMBERS 
    // SERIES OF CATALAN NUMBERS GOES AS FOLLOWS : 
    //  1, 1 , 2 , 5, 14, 42 
    
    
    // HOW TO IDENTIFY ?
    // N= 3 ,   A<B<C 
//     A                 B                 C
//      \               / \                /
//       B             A   C              B
//         \                             /
//          C                           A
        
//     C0*C2    +       C1*C1     +    C2*C0 
        
    // HENCE JUST CATALAN NUMBER CALCULATE KRNA HOGA 
    
    
//     SIMILARY FOR N=4 NODES
//     C0*C3 + C1*C2 + C2*C1 + C3*C0
    
       
    
    int numTrees(int n) {
        
       int dp[n+2];
        
        memset(dp, 0, sizeof(dp));
        dp[0]=1;
        dp[1]=1;
        
        
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                // j in left
                // n-j-1 in right
                dp[i] +=  dp[j] * dp[i-j-1];
            }
        }
        
        
        return dp[n];
        
        
        
        
        
        
    }
};