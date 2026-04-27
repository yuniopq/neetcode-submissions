class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int> frecuencia;

        for(int i = 0; i < 9; i++){

            frecuencia = map<char,int>();
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    if(board[j+(i%3)*3][k+(i/3)*3] != '.'){
                        if(frecuencia[board[j+(i%3)*3][k+(i/3)*3]])
                            return false;

                        frecuencia[board[j+(i%3)*3][k+(i/3)*3]]++;
                    }
                }
            }

            frecuencia = map<char,int>();
            for(int j = 0; j < 9; j++){
                if(board[j][i] != '.'){
                    if(frecuencia[board[j][i]])
                        return false;

                    frecuencia[board[j][i]]++;
                }
            }

            frecuencia = map<char,int>();
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    if(frecuencia[board[i][j]])
                        return false;

                    frecuencia[board[i][j]]++;
                }
            }
        }

        return true;
    }
};