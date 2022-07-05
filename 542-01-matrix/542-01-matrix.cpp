class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       
        queue<pair<int,int>>q;
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>dis(n, vector<int>(m, INT_MAX));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i, j});
                    dis[i][j]=0;
                }
            }
        }
        
        int dx[4]={-1, 1, 0, 0};
        int dy[4]={0, 0, 1, -1};
        
        while(!q.empty())
        {
            auto cur = q.front();
            int x = cur.first;
            int y = cur.second;
            q.pop();
            for(int k=0;k<4;k++)
            {
                int xx = x+ dx[k];
                int yy = y+ dy[k];
                if(xx>=0 and yy>=0 and xx<n and yy<m)
                {
                    if(dis[xx][yy] > dis[x][y]+1)
                    {
                        dis[xx][yy] = dis[x][y]+1;
                        q.push({xx, yy});
                    }
                }
            }
            
            
        }
        
        return dis;
        
        
        
    }
};