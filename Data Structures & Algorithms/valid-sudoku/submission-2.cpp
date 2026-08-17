class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check row
        for(auto row : board){
            set<int> check;
            for(auto index : row){
                if(index == '.') continue;
                if(check.count(index) != 1){
                    check.insert(index);
                } else {
                    cout << "row false" <<endl;
                    return false;
                }
            }
        }
        // check column
        for (int i  = 0; i < 9; i++){
            set<int> check;
            for (int j  = 0; j < 9; j++){
                if(board[j][i] == '.') continue;
                if(check.count(board[j][i]) != 1){
                    check.insert(board[j][i]);
                } else {
                    cout << "column false" <<endl;
                    return false;
                }
            }
        }
        // check square
        for(int i = 0; i < 9; i+=3){
            for(int j = 0; j < 9; j+=3){
                set<int> check;
                for(int k = j; k < j+3; k++){
                    for(int f = i; f < i+3; f++) {
                        if(board[k][f] == '.') continue;
                        if(check.count(board[k][f]) != 1){
                            check.insert(board[k][f]);
                        } else {
                            cout << "square false" <<endl;
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
