class Solution {
public:
    
    bool solve(int n, map<int,int>hash)
    {
        int ans=0;
        while(n!=1)
        {
            ans=0;
            while(n)
            {
                int rem = n%10;
                ans+= rem*rem;
                n=n/10;
            }
            n= ans;
            if(hash[ans])
            {
                return false;
            }
            else
            {
                hash[ans]++;
            }
        }
        return true;
    }
    
    bool isHappy(int n) {
        
        
        map<int,int>hash;
        bool ans  = solve(n , hash);
        return ans;
   
    }
};