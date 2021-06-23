class Solution {
public:
    string frequencySort(string s) {
       
        // brute force : use of the comparator function , to sort in decreasing order on the basis of the frequency of the given elements
        
        // we can make use of such a data structure which will allow the data to be sorted in decreasing order
        
        map<char,int>freq;
        
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            freq[s[i]]++;
        }
        
        priority_queue<pair<int, char>>pq;
        
        for(auto it : freq)
        {
            int i = it.second;
            char ch = it.first;
            
           
                 pq.push({i, ch});
            
           
        }
        
        string ans="";
        
        while(!pq.empty())
        {
            auto cur  = pq.top();
            int f = cur.first;
            char t = cur.second;
           // cout<<t<<"\n";
            for(int i=1;i<=f;i++)
            {
                ans+= t;
            }
            pq.pop();
        }
        return ans;
        
    }
};