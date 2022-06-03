class NumMatrix {
      vector<vector<int>> prefixMatrix ;
public:
    
    NumMatrix(vector<vector<int>>& matrix) {
        
        // int prefixMatrix [matrix.size()][matrix[0].size()];     
            
    for (int i = 0; i < matrix.size(); i++){
        vector<int> v ;    
        for (int j = 0; j < matrix[0].size(); j++){
             v. push_back(0);
        }   
        prefixMatrix.push_back(v);
       
    }
    
        
        for (int i = 0; i < matrix.size(); i++){
          
            int sum  = 0 ;
            for (int j = 0; j < matrix[0].size(); j++){
                sum += matrix[i][j];
                prefixMatrix[i][j] = sum ;
            }
           
        }
        
     
        for (int i = 0; i < matrix[0].size(); i++){
         
            int sum  = 0 ;
            for (int j = 0; j <  matrix.size(); j++){
                sum += prefixMatrix[j][i];
                prefixMatrix[j][i] = sum ;
            }
            
        }
        
    
    for (int i = 0; i < matrix.size(); i++){
           
        for (int j = 0; j < matrix[0].size(); j++){
         
                // cout <<  prefixMatrix[i][j] << " " ;
            
    }
        // cout <<endl ;
    }}
    

    
    int sumRegion(int row1, int col1, int row2, int col2  ) {
        
    
        
        return prefixMatrix[row2][col2] 
            - (row1 > 0 ? prefixMatrix[row1- 1][col2] : 0 ) 
            - (col1>0 ? prefixMatrix[row2][col1-1] :0) 
            + ((row1 > 0 && col1 >0 ) ? prefixMatrix[row1-1][col1-1] : 0); 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */