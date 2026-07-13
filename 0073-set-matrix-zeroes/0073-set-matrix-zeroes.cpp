class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int m = matrix.size();
       int n = matrix[0].size();

       vector<bool> columns(n,false);
       vector<bool> row(m,false);

       for(int i = 0 ; i < m ; i++){
        for(int j = 0; j < n ;j++){
            if(matrix[i][j] == 0){
                columns[j] = true;
                row[i] = true;
            }

        }
       }
       for(int i = 0 ; i < m ; i++){
       
        for(int j = 0; j < n ;j++){
            if(row[i] || columns[j]){
                matrix[i][j] = 0;
            }

        }
       }


    }
};