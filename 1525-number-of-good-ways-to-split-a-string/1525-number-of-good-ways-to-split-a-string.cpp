class Solution {
public:
    int numSplits(string s) {
        
        int n = s.length();
        map<int,int>left;
        map<int,int>right;
        
        // int i=0;
        // int j=n-1;
        int ct=0;
        vector<int>pre(n, 0);
        vector<int>suf(n, 0);
        
        for(int i=0;i<n;i++)
        {
            left[s[i]]++;
            pre[i]=left.size();
        }
        
        for(int j=n-1;j>=0; j--)
        {
            right[s[j]]++;
            suf[j]=right.size();
        }
        
        for(int i=1;i<n;i++)
        {
            if(pre[i-1]==suf[i])
            {
                ct++;
            }
        }
        
//         while(i<n )
//         {
//             left[s[i]]++;
//             right[s[n-1-i]]++;
          
//              // cout<<i<<" "<<j<<"\n";
//             if(left.size()==right.size())
//             { 
               
//                 ct++;
//             }
//               i++;
//               j--;
//         }
            
        return ct;
        
        
    }
};

// class Solution {
// public:
    
//     bool good(string s, int i, int j)
//     {
//         set<char>distinct;
//         for(int k=i;k<=j;k++)
//         {
//             distinct.insert(s[k]);
//         }
//         return distinct.size();
//     }
//     int solve(string s, int i, int j)
//     {
//         if(i>j)
//             return 0;
        
//         int temp=0;
//         for(int k=i;k<=j-1;k++)
//         {
//             if(good(s, i, k)==good(s, k+1, j))
//             temp += solve(s, i, k) + solve(s, k+1, j)+1;
//         }
//         return temp;
//     }
    
//     int numSplits(string s) {
      
//         int n = s.length();
        
//         return solve(s, 0, n-1);
//     }
// };