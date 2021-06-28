void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    for(int r=0;r<rows;r++) if(matrix[r][j]!=0) matrix[r][j]=-1000;
                    for(int c=0;c<cols;c++) if(matrix[i][c]!=0) matrix[i][c]=-1000;
                }
            }
        }
        //making -1 as 0
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==-1000) matrix[i][j]=0;
            }
        }
    }
