class Solution {
public:
    int smoothen(vector<vector<int>>& img,int x,int y){
        int sum=0;int count=0;
        int m=img.size();
        int n=img[0].size();
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                //this combination gives all the 9 cell values
                int new_x=x+i;
                int new_y=y+j;
                //checking if those values actually exist within the matrix
                if(new_x>=0 && new_x<m && new_y>=0 && new_y<n) {
                    sum+=img[new_x][new_y];
                    ++count;
                }
            }
        }
        return sum/count;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> res(m, vector<int>(n, 0));
        //resizing the vector to resolve null pointer error
        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               res[i][j]=smoothen(img,i,j);
           }
       }
       return res;
    }
};