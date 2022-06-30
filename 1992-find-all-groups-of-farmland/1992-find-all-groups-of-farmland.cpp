class Solution {
public:

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
void dfs(int i, int j, int &m, int &n, vector<vector<int>>&land, vector<vector<int>>&vis,int &minix, int &miniy, int &maxix, int &maxiy )
{
        if(i<0 || j<0 || i>=m || j>=n || vis[i][j]==1)
            return ;
    
        vis[i][j]=1;
    
        for(int k=0;k<4;k++)
        {
            int xx = i  +  dx[k];
            int yy = j  +  dy[k];
            
            if(xx>=0 and yy>=0 and xx<m and yy<n and land[xx][yy]==1 and vis[xx][yy]==0)
            {
                minix = min(minix, xx);
                miniy = min(miniy, yy);
                maxix = max(maxix, xx);
                maxiy = max(maxiy, yy);
                dfs(xx, yy, m, n, land, vis, minix, miniy, maxix, maxiy);
            }
        }
        
        
}
vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>>ans;
        vector<vector<int>>vis(m, vector<int>(n, 0));
    
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(land[i][j]==1 and vis[i][j]==0)
                {
                   int minix = i;
                   int miniy = j;
                   int maxix = i;
                   int maxiy = j;
                   dfs(i, j, m, n, land, vis, minix, miniy, maxix, maxiy); 
                   vector<int>temp1;
                    temp1.push_back(minix);
                    temp1.push_back(miniy);
                    temp1.push_back(maxix);
                    temp1.push_back(maxiy);
                    ans.push_back(temp1);
                    // ans.push_back(temp2);
                }
            }
        }
        
          return ans;
    }
};

// o indexed
// m*n binary matrix
// 0 = forested land 
// 1 = farmland 

// farmland in 1 group is not 4 directionally adjacent to another farmland 

// output :
// [r1, c1, r2, c2]
// top left and bottom right corner of each group of farmland ? 
    

    