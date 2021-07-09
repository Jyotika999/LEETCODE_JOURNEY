class Solution {
public:
    int minSwap(vector<int>& A, vector<int>& B) {
        
        int n = A.size();
        
        int swaps[n+1];
        int noswaps[n+1];
        
        for(int i=0;i<n;i++)
        {
            swaps[i] = n;
            noswaps[i] =n;
        }
        
        // swaps[i] --> array is strictly increasingly sorted till ith index , by swapping ith index
        // noswaps[i] --> array is strictly increasingly sorted till ith index, without swapping the ith index
        
        
        
        int ans =0;
        swaps[0]=1;
        noswaps[0]=0;
        
        for(int i=1;i<n;i++)
        {
            if(A[i]>A[i-1] and B[i]>B[i-1])
            {
                swaps[i] = swaps[i-1] +1;
                noswaps[i] = noswaps[i-1];
            }
            if(A[i]>B[i-1] and B[i]>A[i-1])
            {
                swaps[i] = min(swaps[i] , noswaps[i-1] +1);
                noswaps[i] = min(noswaps[i], swaps[i-1] );
            }
        }
        
        ans = min (swaps[n-1] , noswaps[n-1]);
        return ans;
        
    }
};