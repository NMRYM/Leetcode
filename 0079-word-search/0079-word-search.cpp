class Solution {
public:
    bool dfs(string word, vector<vector<char>> &board, int c,int i, int j){

        if (c == word.length()) return true;
        
        int n = board.size(), m = board[0].size();
        if(i<0 || j<0 || j>=m || i>=n  || word[c] !=board[i][j]){
            return false; 
        }
        char temp = board[i][j];
        board[i][j] = '#';
        vector<int> row = {-1,+1,0,0};
        vector<int> col = {0,0,-1,+1};

        for(int k = 0 ;k<4 ;k++){
            int nrow = i+row[k];
            int ncol = j+col[k];
            if (dfs( word, board,  c + 1,nrow, ncol)) {
                return true;
            }
        }
        board[i][j] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m= board[0].size();

        vector<int> count(256, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                count[board[i][j]]++;
            }
        }
        for (char ch : word) {
            count[ch]--;
            if (count[ch] < 0) return false;
        }
        
        
        if (count[word.back()] < count[word.front()]) {
            reverse(word.begin(), word.end());
        }
        int c=0;
        for(int i = 0; i < n ;i++){
            for(int j = 0 ; j < m ; j++){
                if(board[i][j] == word[0]){
                    if(dfs(word,board,c,i,j)){
                        return true;
                    }
                    
                }
            }
        }
        return false;
    }
};