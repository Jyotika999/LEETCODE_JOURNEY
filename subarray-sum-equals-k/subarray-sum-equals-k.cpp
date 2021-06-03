class Solution {
public:
    int subarraySum(vector<int>& A, int K) {
        
        int N = A.size();
         
        unordered_map<int,int>mp;
        
        int count=0;
        int sum=0;
        
        for(int i=0;i<N;i++)
        {
            sum = sum + A[i];
            if(sum == K)
            {
                count++;    
            }
            if(mp.find(sum-K) != mp.end())
            {
                count += mp[sum-K];
            }
            mp[sum]++;
            //cout<<sum<<" "<<count<<"\n";
        }
        
        return count;
        
        
   
    }
};