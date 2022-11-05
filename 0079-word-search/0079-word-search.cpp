class Solution {
    bool solve(vector<vector<char>>& board, string& word, int i , int j,  int k){
        if(k == word.size())
            return true;
        
        if(i < 0 || j < 0 || i > board.size()-1 || j > board[0].size()-1 )
            return false;
        
        if(board[i][j] != word[k]) return false;
        
        board[i][j] = '*';
        
        bool search = solve(board, word, i+1, j, k+1) ||
                      solve(board, word, i-1, j, k+1) ||
                      solve(board, word, i, j+1, k+1) ||
                      solve(board, word, i, j-1, k+1)  ;
        
        board[i][j] = word[k];
        
        return search; 
    }
    
     bool adjacentSearch(vector<vector<char>>& board, const string& word, int i, int j, int index)
    {
        if(index == word.size()) return true; // end condition
        if(i < 0 || j < 0 || i > board.size()-1 || j > board[0].size()-1) return false; // boundary of matrix
        if(board[i][j] != word[index]) return false; // do not match
        // match!
        board[i][j] = '*'; // change the content, to avoid duplicated search
        bool furtherSearch =  adjacentSearch(board, word, i+1, j, index+1) || // up
                              adjacentSearch(board, word, i-1, j, index+1) || // down
                              adjacentSearch(board, word, i, j-1, index+1) || // left
                              adjacentSearch(board, word, i, j+1, index+1);   // right
        
        board[i][j] = word[index]; // modify it back!
        return furtherSearch;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        for(int i = 0 ; i < m ; ++i){
            for(int j = 0 ; j < n ; ++j){
                if(solve(board, word,i, j , 0))
                    return true;
            }
        }
        return false;
    }
};