class Solution {
public:
    
    int dx[4]={1, -1, 0, 0};
    int dy[4]={0, 0, 1, -1};
    
    void dfs(int i, int j, int n, int m, vector<vector<char>>&board, vector<vector<int>>&vis)
    {
        if(i<0 || j<0 || i>=n || j>=m)
            return;
        
        vis[i][j]=1;
        
        cout<<i<<" "<<j<<"\n";
        for(int k=0;k<4;k++)
        {
            int xx = i+ dx[k];
            int yy = j+ dy[k];
            
            if(xx>=0 and yy>=0 and xx<n and yy<m and vis[xx][yy]==0 and board[xx][yy]=='O')
            {
                dfs(xx, yy, n, m, board, vis);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
     
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 and (i==0 || j==0 || i==n-1 || j==m-1) and board[i][j]=='O')
                {
                    dfs(i, j, n, m, board, vis);
                }
             
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 and board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        
        
    }
};