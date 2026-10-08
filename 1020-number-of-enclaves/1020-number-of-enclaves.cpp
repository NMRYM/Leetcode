class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;

        int n =  grid.size();
        int m = grid[0].size();
       vector<vector<int>> vis(n, vector<int>(m,0));


        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < m; j++){
                if((i == 0 || j ==0 || j== m-1 || i ==n-1)&& grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j] =1;
                }
            }
        }

        vector<int> delrow = {-1, 0 ,1,0};
        vector<int> delcl ={0, 1, 0 ,-1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;

            q.pop();

            for(int i = 0 ; i< 4 ;i++){
                int nr = row+ delrow[i];
                int nc = delcl[i]+col;

                if(nr>=0 && nr< n && nc>=0 && nc< m && vis[nr][nc] ==0 && grid[nr][nc]==1){
                    vis[nr][nc]=1;
                    q.push({nr, nc});
                }
            }
        }

        int c=0;

        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < m ; j++){
                if(vis[i][j] == 0 && grid[i][j] ==1){
                    c++;
                }
            }
        }

        return c;
    }
};