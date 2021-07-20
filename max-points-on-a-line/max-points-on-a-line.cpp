class Solution {
public:
    
    int maxPoints(vector<vector<int>>& points) {
        
        
        int maxi = 2;
        int n = points.size();
        
        if(n<=2)
            return n;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1; j<n;j++)
            {
                int pt=2;
                for(int k=0;k<n;k++)
                {
                    if(i!=k and k!=j)
                    {
                        int x1 = points[i][0];
                        int y1 = points[i][1];
                        int x2 = points[j][0];
                        int y2 = points[j][1];
                        int x3 = points[k][0];
                        int y3 = points[k][1];
                        
                        if( (x2-x1) * (y3-y1)  ==  (x3-x1) * (y2-y1))
                        {
                            pt = pt +1;
                        }
                    }
                    maxi = max( maxi, pt);
                }
            }
        }
        
        return maxi;
    }
};


// O(N^3) SOLUTION
// CHOOSING ALL POSSIBLE 2 POINTS, AND THEN TRAVERSING THE ARRAY OF POINTS AGAIAN
// THEN CHECKING IF THE SLOPE IF SAME , THEN INCREMENET MAXIMUM