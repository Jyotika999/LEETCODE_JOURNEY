class Solution {
    void dfs(char [][] surface,boolean [][]visited,int x,int y){
		visited[x][y] = true;
		int n = surface.length;
		int m = surface[0].length;
		if(surface[x][y]=='0'){
			return;
		}
		if(x+1<n && visited[x+1][y]==false){
			dfs(surface,visited,x+1,y);
		}
		if(y+1<m && visited[x][y+1]==false){
			dfs(surface,visited,x,y+1);
			
		}
		if(x-1>=0 && visited[x-1][y]==false){
			dfs(surface,visited,x-1,y);
		}
		if(y-1>=0 && visited[x][y-1]==false){
			dfs(surface,visited,x,y-1);
		}
		
		
	
	}
	int getNumberOfIslands(char[][] surface) {
    	// add your logic here
		int n = surface.length;
		int m = surface[0].length;
		boolean [][] visited  = new boolean [n][m];
		int count_islands = 0;
		int sum = 0;
		for(int i=0;i<n;i++){   // counting the number of 1's in the matrix
			for(int j=0;j<m;j++){
				sum = sum + (surface[i][j]-'0');
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
                
				if(surface[i][j]=='1' && visited[i][j]==false){
					dfs(surface,visited,i,j);
					count_islands++;
						
				}
					
					
			}
		}
		return count_islands;
		
		
	}
    public int numIslands(char[][] grid) {
        return getNumberOfIslands(grid);
    }
}