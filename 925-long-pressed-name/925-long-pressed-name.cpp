class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        int namelen = name.length();
        int typelen = typed.length();
        
        int nm=0;
        int ty=0;
        
        while(nm<namelen)
        {
            int temp=nm;
            int ct1=0;
            while(temp<namelen and name[temp]==name[nm])
            {
                temp++;
                ct1++;
            }
            
            int temp2=0;
            int ct2=0;
           
            if(name[nm]==typed[ty])
            {
                temp2=ty;
                ct2=0;
                while(temp2<typelen and typed[ty]==typed[temp2])
                {
                    temp2++;
                    ct2++;
                }
                ty = temp2;
            }
           nm=temp;
            
            if(ct2>=ct1)
                continue;
            else
                return false;
        }
        if(nm==namelen and ty==typelen)
            return true;
        
        return false;
        
     
    }
};