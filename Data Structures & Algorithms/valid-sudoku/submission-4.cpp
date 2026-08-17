class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, set<int>> row;
        unordered_map<int, set<int>> column;
        unordered_map<int, set<int>> square;
        for(int i  = 0; i < board.size(); i++){
            for(int j = 0; j < board.size(); j++){
                if(board[i][j] == '.') continue;
                if(row[i].count(board[i][j])) return false;
                if(column[j].count(board[i][j])) return false;
                if(square[(i/3) + (j/3)*3].count(board[i][j])) return false;
                row[i].insert(board[i][j]);
                column[j].insert(board[i][j]);
                square[i/3 + (j/3)*3].insert(board[i][j]);
            }
        }
        return true;
    }
};
