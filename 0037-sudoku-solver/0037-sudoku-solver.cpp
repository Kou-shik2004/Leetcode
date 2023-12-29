class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row,int col,char num){
        for(int r=0;r<board.size();r++){
            //checking if columns contain num
            if(board[r][col]==num) return false; //num is char
        }
        for(int c=0;c<board.size();c++){
            //checking if rows contain num
            if(board[row][c]==num) return false; 
        }
        int s=sqrt(board.size());
        //getting the starting index of row and column of the subgrid
        int rowstart=row-row%3;
        int colstart=col-col%3;

        for(int i=rowstart;i<rowstart+s;i++){
            for(int j=colstart;j<colstart+s;j++){
                //checking if the subgrid elements contain num
                if(board[i][j]==num) return false;
            }
        }
        return true; //hence the num can be safely placed
    }
    bool ssolve(vector<vector<char>>& board,int n){
        //1.scanning the grid and searching the index for a empty cell
        int row=-1;
        int col=-1; 
        bool isempty=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.'){
                    row=i;
                    col=j;
                    isempty=false;
                    break;
                }
            }
            if(!isempty)  break; //if cell has been found
        }
         //if no empty cell has been found in the whole grid
        if(isempty) return true; 
       
        //selecting numbers from 1 to n to place on grid
        for(int x=1;x<=n;x++){ 
            if(isSafe(board,row,col,x+'0')){
                board[row][col]=x+'0'; // int to char
                if(ssolve(board,n)) return true;
                
                //if the above call fails to place a number this is used to backtrack 
                board[row][col]='.'; 
              
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
       ssolve(board,board.size());
       
    }
    
};