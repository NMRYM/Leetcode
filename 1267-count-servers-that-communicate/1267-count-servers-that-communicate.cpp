class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n= grid[0].size();
        vector<int> col(n,0);
        vector<int> row(m,0);

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ;j++){
                if(grid[i][j] ==1){
                    col[j]++;
                    row[i]++;
                }
            }
        }

        int c=0;

        for(int i = 0 ; i <m ;i++){
            for(int j = 0 ; j < n ; j++){
                if((col[j]>=2 || row[i]>=2)&& grid[i][j]==1){
                    c++;
                }
            }
        }
        return c;
    }
};