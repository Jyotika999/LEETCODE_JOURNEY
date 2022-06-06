class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
      //  https://leetcode.com/problems/sum-of-all-odd-length-subarrays/discuss/854184/JavaC%2B%2BPython-O(N)-Time-O(1)-Space
        
        int n = arr.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
           ans+= (((n-i)*(i+1)+1)/2)*arr[i];
        }
        
        return ans;
    }
};
