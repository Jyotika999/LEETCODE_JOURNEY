class Solution {
public:
    bool judgeCircle(string moves) {
        
        int lr=0;
        int ud=0;
        
        int n = moves.length();
        
        for(int i=0;i<n;i++)
        {
            if(moves[i]=='L')
                lr++;
            else if(moves[i]=='R')
                lr--;
            else if(moves[i]=='U')
                ud++;
            else
                ud--;
        }
        if(lr==0 and ud==0)
            return true;
        else
            return false;
        
        
    }
};