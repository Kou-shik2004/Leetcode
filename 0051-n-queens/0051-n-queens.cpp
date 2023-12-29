class Solution {
public:
    vector<vector<string>> ans;

    bool isSafe(int row,int col,vector<string>& board){

        //Check for queens horizontally (as we are already placing queens in different columns)

        for(int i=0;i<col;i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
        //Check the upper diagonal i (row to 0 --) j(col to 0 --)
        //NTM: condtion c1 && c2 not c1,c2 lol
        
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        } 

        //Check the lower diagonal i (row to N ++) j(col to 0 --)

        for(int i=row,j=col;i<board.size() && j>=0;i++,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        } 
        return true;
    }
//Idea: check for every possible row permutation by trying rows from 0 to N-1 for every col and backtrack if queens attack each other

    void nqueens(vector<string>& board,int col){

        if(col==board.size()){
        //BASE CASE: we reach end of the board
        //add the final board to ans
            ans.push_back(board);
            return ;
        }
        for(int i=0;i<board.size();i++){
            //we try different arrangements for row
            if(isSafe(i,col,board)==true){
                 // similar to setting the matrix ele as 1
                board[i][col]='Q' ;
                
                nqueens(board,col+1);//moves to fill next column

                 // similar to setting the matrix ele as 0
                 //if the queens attack each other we backtrack
                board[i][col]='.' ;
                
                
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        //this will create a nxn matrix string (n,.) fills each string of length n with dots(.)

        vector<string> board(n,string(n,'.'));

        nqueens(board,0);
        return ans;
    }
};