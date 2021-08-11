class Solution {
public:
    int dx[4]={0, 0, 1, -1};
    int dy[4]={1, -1, 0, 0};
    
    void dfs(int sr, int sc, int org, int newc, vector<vector<int>>& image)
    {
        
        image[sr][sc]=newc;
        
        for(int i=0;i<4;i++)
        {
            int xx = sr+dx[i];
            int yy = sc+dy[i];
            
            if(xx>=0 and yy>=0 and xx<image.size() and yy<image[0].size() and image[xx][yy]==org)
            {
                dfs(xx, yy, org, newc, image);   
            }
        }
        
        
        
    }
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newc) {
        
        int org = image[sr][sc];
        
        
        if(org==newc)
            return image;
      
        dfs(sr, sc, org, newc, image);
        
        
        return image;
        
        
        
    }
};



// 011
    

