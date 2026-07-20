class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();
         k = k % ( m*n);

        vector<vector<int>> res(m,vector<int>(n));
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                int old = i*n +j;
                int newd = (old + k) % (m*n);

                int newr = newd / n;
                int newc = newd % n;

                res[newr][newc] = grid[i][j];
            }
        }

        return res;
        
    }
};