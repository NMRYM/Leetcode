class Solution {
public:
    void dfs(long long &sum, vector<vector<int>>& vis, vector<vector<int>> &grid, int i, int j){
        int n = grid.size(),m=grid[0].size();
        if( i<0 || i>=n || j<0||j>=m||vis[i][j] ==1 || grid[i][j]==0 ){
            return;
        }
        vis[i][j]=1;
        sum+= grid[i][j];
        dfs(sum,vis,grid,i+1,j);
        dfs(sum,vis,grid,i-1,j);
        dfs(sum,vis,grid,i,j+1);
        dfs(sum,vis,grid,i,j-1);

    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int c=0;
        long long sum=0;
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));

        for(int i = 0 ;i <grid.size(); i++){
            for(int j = 0 ; j < grid[0].size() ;j++){
                if(!vis[i][j] && grid[i][j]!=0){
                        sum=0;
                        dfs(sum,vis,grid,i,j);
                        if(sum%k==0){
                            c++;
                        }
                }
            }
        }
        return c;
    }
};