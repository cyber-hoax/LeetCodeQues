class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i = 0 ; i < m-1; ++i){
            for(int j = i+1 ; j < n ; ++j){
                  int tmp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = tmp;
            }
        }
        for(int i = 0 ; i<m; ++i)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};