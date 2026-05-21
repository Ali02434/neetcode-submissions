class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //checking the rows
        for(int i = 0 ; i < board.size(); i++){
            //clear it for every row
            unordered_map <int,int> count;
            for(int j = 0; j < board.size(); j++){
                if(board[i][j] != '.'){
                    count[board[i][j]]++;  
                }
                if(count[board[i][j]] > 1){
                    return false;
                }
            }
        }
        //checking the columns
        for(int i = 0; i < board.size(); i++){
            //clear it for every columns
            unordered_map <int,int> count;
            for(int j = 0; j < board.size(); j++){
                if(board[j][i] != '.'){
                    count[board[j][i]]++;
                }
                if(count[board[j][i]] > 1){
                    return false;
                }
            }
        }

        //checking the squares
        for(int square = 0; square < 9; square++){            
            unordered_map <int,int> count;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if(board[row][col] != '.'){
                        count[board[row][col]]++;
                    }
                    if(count[board[row][col]] > 1){
                        return false;
                    }
                }
            }
        }

        return true;

    }
};
