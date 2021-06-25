class Solution {
public:
    vector<int>v;
    
    int solve(int start,  int k)
    {
        if(v.size()==1)
            return v[0];
        
        start = (start+k-1)% (v.size());
        auto it = v.begin()+start;
        v.erase(it);
        
     //   start++;
        
        return solve(start, k);
        
    }
    
    int findTheWinner(int n, int k) {

        
        for(int i=1;i<=n;i++)
            v.push_back(i);
        
        return solve(0, k);
        
    }
};