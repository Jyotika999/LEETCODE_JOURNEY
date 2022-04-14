class Solution {
public:
   
    // int ct=0;
    long long solve(string &s, string &t, vector<vector<long long>>&dp, long long &ns, long long &nt, long long i, long long j)
    {


            if(j==0)
                return dp[i][j]=1;

            if(i==0)
                return dp[i][j]=0;



       
            if(dp[i][j]!=-1)
            return dp[i][j];

            if(s[i-1]==t[j-1])
            {
                // ct++;

                return dp[i][j]= (solve(s, t, dp, ns, nt, i-1, j-1)+solve(s, t, dp, ns, nt, i-1, j));
            }
            else
            {
                return dp[i][j]= solve(s, t, dp, ns, nt, i-1, j);
            }
       
    }
    long long numberOfWays(string s) {
       ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
        long long n = s.length();
        vector<vector<long long>>dp(n+1, vector<long long>(4, -1));
        long long m = 3;
        string t;
        t = "010";
        long long n1 = solve(s, t, dp, n, m, n, m);
        // memset(dp, -1, sizeof(dp));
        for(long long i=0;i<n+1;i++)
        {
            for(long long j=0;j<=3;j++)
            {
                dp[i][j]=-1;
            }
        }
        t = "101";
        long long n2 = solve(s, t, dp, n, m, n, m);
        // return (n1+n2);
        // cout<<n<<" "<<ct<<"\n";
        return (n1+n2);
       
    }
};