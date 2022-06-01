class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int n1 = s1.length();
        int n2 = s2.length();
        
        vector<int>v;
        for(int i=0;i<n1;i++)
        {
            if(s1[i]!=s2[i])
            {
                v.push_back(i);
            }
        }
        if(v.size()>=2)
        swap(s2[v[0]], s2[v[1]]);
        if(s1==s2)
            return true;
        else
            return false;
        
        
    }
};

// diff at what pos
// if i1 i2, i3, i4 have different positions
