class Solution {
public:
    bool issafe(int n, vector<string> &mat ,int row , int cols){
        for(int i = 0 ; i < n ; i++){
            if(mat[row][i] == 'Q'){
                return false;
            }
        }
        for(int j = 0 ; j < n ; j++){
            if(mat[j][cols] == 'Q'){
                return false;
            }
        }
        for(int i = row , j = cols ; i >=0 && j >= 0 ; i-- , j--){
            if(mat[i][j] == 'Q'){
                return false;
            }
        }
        for(int i = row , j = cols ; i>=0 && j < n ; i-- , j++){
            if(mat[i][j] == 'Q'){
                return false;
            }
        }
        return true;

    }
    void queens(int n, vector<string> &mat ,vector<vector<string>> &matrix , int row ){
        if(row == n){
            matrix.push_back(mat);
            return;
        }
        for(int i = 0 ;i < n ; i++){
            if(issafe(n , mat , row , i)){
                mat[row][i] = 'Q';
                queens(n , mat , matrix , row+1);
                mat[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> mat(n , string(n , '.'));
        vector<vector<string>> matrix;
        queens(n , mat , matrix , 0);
        return matrix; 
    }
};