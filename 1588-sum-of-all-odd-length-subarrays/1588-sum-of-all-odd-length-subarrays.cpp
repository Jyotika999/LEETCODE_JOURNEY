class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n = arr.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if((j-i+1)&1)
                {
                    ans+=sum;
                }
            }
        }
        
        return ans;
    }
};

// i, j
// i=0, j=0
// len of subarray between i and j = j-i+1
// len = odd
// sum+= currentsum
// len = even
// i++
// len = oddd

// case, len=even
// j++
// len = odd
// sum sath m calculate kro 