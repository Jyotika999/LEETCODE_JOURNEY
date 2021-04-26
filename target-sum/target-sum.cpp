#define ll long long int
class Solution {
public:
    
    
//     int dp[50][5005];
    
//     int subsetsum( vector<int>ar, int n , int sum)
//     {
//         if(sum==0)
//             return dp[n][sum]=1;
//         // if(sum==0 && n==0) 
//         //     return 1;
//         if(n==0)
//             return dp[n][sum] = 0;
        
//         if(dp[n][sum]!= -1)
//         {
//             return dp[n][sum];
//         }
        
//         if(ar[n-1]<=sum)
//         {
//             return dp[n][sum] = subsetsum(ar, n-1, sum-ar[n-1])+ subsetsum(ar, n-1, sum);
//         }
//         else
//         {
//             return dp[n][sum] = subsetsum(ar, n-1, sum);
//         }
//     }
    
    int findTargetSumWays(vector<int>& a, int target) {
        
         ll i,j,sum=0,n=a.size();
        for(i=0;i<n;i++){
            sum+=a[i];
        }
        if(target>sum)
            return 0;
        
        sum = (sum+target);
        if(sum%2!=0)
            return 0;
        
        ll k = (sum)/2;
        ll dp[n+1][k+1];
        memset(dp, 0, sizeof(dp));
        for(i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(i=1;i<=n;i++){
            for(j=0;j<=k;j++){
                if(a[i-1]<=j){
                    dp[i][j]=dp[i-1][j] + dp[i-1][j-a[i-1]];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][k];
//         int sum=0;
//         int n = nums.size();
//         for(int i=0;i<n;i++)
//         {
//             sum+= nums[i];
//         }
        
//         int reqdsum  = (sum+target)/2;
        
//         if( sum< target || (sum+target)%2!=0)
//             return 0;
        
        
//         memset(dp, -1, sizeof(dp));
        
        
//         subsetsum(nums , n , reqdsum);
        
//         cout<<reqdsum<<"\n";
//         for(int i=0;i<=n;i++)
//         {
//             for(int j=0;j<=reqdsum;j++)
//             {
//                 cout<<dp[i][j]<<" ";
                
//             }
//             cout<<"\n";
//         }
       
//         cout<<dp[n][reqdsum]<<"\n";
        
//         return dp[n][reqdsum];
        
        
    }
};