class Solution {
public:
    
   int compute(vector<int>&A, int B)
    {
        int n = A.size();
        int i=0;
        int j=0;
        map<int,int>mp;
        int count =0;

        while(j<n)
        {
            mp[A[j]]++;

            while(mp.size() > B)
            {
                mp[A[i]]--;
                if(mp[A[i]]==0)
                mp.erase(A[i]);

                i++;
            }

            count+=j-i+1;

            j++;
        }
        return count;
    }
    
    
    int subarraysWithKDistinct(vector<int>&A, int B) {
         return (compute(A, B) - compute(A,B-1));
    
    
      
    }
};



