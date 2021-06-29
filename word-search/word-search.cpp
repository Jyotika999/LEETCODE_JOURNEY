class Solution {
public:
    
    bool vis[10][10];
    
    bool search_word(vector<vector<char>>& board, string word,int i, int j, int m, int n, int index, string temp)
    {
       
        if(index==word.length() and word==temp)
        {
           // cout<<word<<" "<<temp<<"\n";
            return true;
        }
        
         if(i>=m || i<0 || j>=n || j<0 || board[i][j]!=word[index]|| vis[i][j]==true)
            return false;
        
        temp.push_back(board[i][j]);
        vis[i][j]=true;
        if(search_word(board, word, i+1, j, m, n, index+1, temp)||
          search_word(board, word, i-1, j, m, n, index+1, temp)||
          search_word(board, word, i, j+1, m, n, index+1, temp)||
          search_word(board, word, i, j-1, m, n, index+1, temp))
            return true;
      
        vis[i][j]=false;
        temp.pop_back();
        return false;
        
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
       
        
        memset(vis, false, sizeof(vis));
        int m = board.size();
        int n = board[0].size();
        
        int i=0;
        int j=0;
        
        for(int x=0;x<m;x++)
        {
            for(int y=0;y<n;y++)
            {
                  if(search_word(board, word, x, y ,m,  n, 0, ""))
                      return true;
       
            }
        }
        return false;
       
    }
};