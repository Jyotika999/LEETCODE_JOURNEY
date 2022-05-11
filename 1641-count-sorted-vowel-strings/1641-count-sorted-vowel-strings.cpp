class Solution {
public:
    
    
    int solve( int last, int n)
    {
        if(n==0)
        {
     
            return 1;
        }
        
       
        
        int ans=0;
        if(last==0)
            last=1;
            
            
        for(int i=last;i<=5;i++)
        {
           ans+= solve(i, n-1);
        }
        return ans;
    }
    
    int countVowelStrings(int n) {
        
       
        
        return solve(0, n);
       
        
    }
};