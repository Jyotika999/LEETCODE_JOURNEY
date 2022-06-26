class Solution {
public:
    
    int solve(int n, int i, int mod, vector<int>&dp)
    {
        if(i<=0)
            return 1;
        
        // if(i==2)
            
        if(dp[i]!=-1)
            return dp[i];
        
        int include = solve(n, i-2, mod, dp)%mod;
        int exclude = solve(n, i-1, mod, dp)%mod;
        
        return dp[i]=((include%mod)+ (exclude%mod))%mod;
    }
    int countHousePlacements(int n) {
        
        vector<int>dp(n+5, -1);
        int mod = 1000000007;
        int ans = solve(n, n, mod, dp);
        return (1LL*(ans%mod)*(ans%mod))%mod;
    }
};


// n*2 plots
// either in first lane 
// or in second lane 

// place in 1st lane or place in 2nd lane?
// choice
// recursive solution  , hence optimisation can be done using dp

// we can come up with a dp solution for one of the side of the street
// so basically this question, now becomes, find the number of ways to place n houses, so that no one of them is adjacent, this question becomes now very similar to house robber problem, https://leetcode.com/problems/house-robber/ , 
// let me give you a brief about this 
// either place house in current position, and jump to pos+2
// or dont place house in current position, and jump to pos+1
// which is simply a resemblance for fibonachi number too 
// but be careful, this you have computed for only one side of the lane. 

// now for taking care for 2 lanes, since the number of different arrangements on both sides of the street is same, 
// hence totalans = number of ways to complete one lane* number of ways to completing one lane 
// since, there is no dependance to place houses in front of the other lane house
// condition is that only there should be no adjacent houses in same lane 
// hence , this question is just boiled down to fibonacci number 







