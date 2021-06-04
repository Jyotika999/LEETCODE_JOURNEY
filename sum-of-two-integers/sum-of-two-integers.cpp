class Solution {
public:
    int getSum(int a, int b) {
        
        int ar[32]={0};
        
        for(int i=0;i<32;i++)
        {
            if( a & (1<<i))
                ar[i]++;
            
            if( b & (1<<i))
                ar[i]++;
        }
        
        long long int base=1;
        long long int ans=0;
        
        for(int i=0;i<32;i++)
        {
          //  cout<<i<<" "<<ar[i]<<"\n";
            ans = ans + base*ar[i];
            base = base *2;
        }
        return ans;
        
    }
};