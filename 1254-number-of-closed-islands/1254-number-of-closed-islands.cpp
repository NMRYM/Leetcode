class Solution {
public:

    void dfs(int r, int c, vector<vector<int>>& grid){
        int row = grid.size(), col = grid[0].size();

        if(r<0 || c<0 ||r>= row || c>=col || grid[r][c] != 0){
            return;
        }

        grid[r][c]=1;
        dfs(r+1,c,grid);
        dfs(r-1,c,grid);
        dfs(r,c+1,grid);
        dfs(r,c-1,grid);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int col = grid[0].size();

        for(int i = 0 ;i < rows;i++){
            for(int j = 0; j <col ; j++){
                if((i==0 || j==0|| i==rows-1 ||j ==col-1) && grid[i][j] == 0){
                    dfs(i,j, grid);
                }
            }
        }

        int c=0;

        for(int i =1 ; i <rows-1;i++){
            for(int j = 1; j<col -1;j++){
                if(grid[i][j] ==0){
                    c++;
                    dfs(i,j,grid);
                }
            }
        }
        return c;
    }
};