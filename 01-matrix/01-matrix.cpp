
// shortest path --> unweighted graph --> dfs
// but the problem here is multiple source nodes

// now, since there are multiple source nodes, should we push all the nodes ?
// but how does this guarantee our solution


// this is coz , when we pop , we will do it in the order of our levels
// and this will surely give the minimum distance 



class Solution {
public:
    
    bool valid(int i, int j, vector<vector<int>>&graph)
    {
        int n = graph.size();
        int m = graph[0].size();
        
        if(i<0 || j<0 || i>=n || j>=m )
            return false;
        else
            return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int dx[4]={-1, 0, 1, 0};
        int dy[4]={ 0, 1, 0, -1};
        
        queue<pair<int,int>>q;
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>dis(n, vector<int>(m,  -1));
        
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {    q.push({i, j});
                     dis[i][j]=0;
                }
            }
        }
        
        
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            int x = cur.first;
            int y = cur.second;
            for(int i=0;i<4;i++)
            {
                int x1 = x + dx[i];
                int y1 = y + dy[i];
                if(valid(x1, y1, mat) and dis[x1][y1]==-1)
                {
                     q.push({x1, y1});
                    dis[x1][y1] = dis[x][y]+ 1;   
                }
               
            }
           
        }
        
        return dis;
        
        
    }
};