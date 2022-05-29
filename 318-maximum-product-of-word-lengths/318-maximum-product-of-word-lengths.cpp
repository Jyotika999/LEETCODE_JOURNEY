class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int n = words.size();
        
        vector<bitset<26>>freq(n);
        
        for(int i=0;i<n;i++)
        {
            string s1 = words[i];
            for(int j=0;j<s1.length();j++)
            {
                freq[i][s1[j]-'a']=1;
            }
        }
        int maxi=0;
        
        for(int i=0;i<n;i++)
        {
            string s1 = words[i];
            for(int j=0;j<i;j++)
            {
                string s2 = words[j];
                int flag=1;
                for(int k=0;k<26;k++)
                {
                    if(freq[i][k] and freq[j][k])
                    {
                        flag=0;break;
                    }
                   
                }
                 if(flag)
                    {
                        int ans = s1.length()*s2.length();
                        maxi = max(maxi, ans);
                    }
            }
        }
        
        return maxi;
        
        
    }
};


//  ["abcw","baz","foo","bar","xtfn","abcdef"]
//  dont have common letters 
//  abcw , xtfn 
//  4 * 4 = 16 

// brute force , 
// for(i = 0 to n)
//     for( j = i+1 to n )
//         if(no_similar_words(i, j))
//             maxlen computation
   
// or 
// optimise in O(n*n*26)
            


// o(n2 * n) = o(n3)
// O( ) = 