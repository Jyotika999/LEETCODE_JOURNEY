class Solution {
public:
    int findDuplicate(vector<int>& ar) {
        
       
    int n = ar.size();
    
    
    for(int i=0;i<n;i++)
    {
        int cur = ar[i];
        int corres_ele = ar[ abs(ar[i])];
        
        if(corres_ele>=0)
        ar[abs(ar[i])] = (ar[abs(ar[i])])*(-1);
        else 
        return abs(ar[i]);
    }
    
   
   
    return -1;
        
    }
};