class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        int x1 = rec1[0];
        int y1 = rec1[1];
        int x2 = rec1[2];
        int y2 = rec1[3];
        
        int x21 = rec2[0];
        int y21 = rec2[1];
        int x22 = rec2[2];
        int y22 = rec2[3];
        
        
        int w1 = max(x1, x21);
        int w2 = min(x2, x22);
        
        int h1 = max(y1, y21);
        int h2 = min(y2, y22);
        
        int w = (w2-w1);
        int h = (h2-h1);
       // w>0 and h>0
        return (w>0 && h>0);
        
    
    }
};