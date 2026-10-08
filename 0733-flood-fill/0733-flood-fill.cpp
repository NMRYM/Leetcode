class Solution {
public:


    void dfs(int row,  int column, int ini, int nw, vector<vector<int>> &ans, vector<vector<int>> &image, vector<int> &delrow, vector<int> &delcl){

        ans[row][column] = nw;
        int n = image.size();
        int m = image[0].size();

        for(int i = 0; i < 4; i++){
            int nr = row + delrow[i];
            int nc = column + delcl[i];

            if(nr >=0 && nr<n && nc>=0 && nc <m && ini == image[nr][nc] && ans[nr][nc] !=nw){
                dfs(nr, nc, ini, nw, ans, image, delrow, delcl);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        vector<vector<int>> ans = image;
        int ini = image[sr][sc];

        vector<int> delrow = {-1,0,1,0};
        vector<int> delcl ={0, 1, 0, -1};

        dfs(sr,sc,ini, color, ans, image, delrow, delcl);

        return ans;
        

    }
};