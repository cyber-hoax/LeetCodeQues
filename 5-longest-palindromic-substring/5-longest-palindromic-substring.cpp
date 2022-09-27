class Solution {
    bool check(string& s, int i, int j){
        while(i<j){
            if(s[i] != s[j])
                return false;
            j--;
            i++;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
       int i = 0 , j = 0 , start =0 , end = 0 ;
    string ans ="";
       for(i = 0 ; i < s.size(); ++i){
          for(j =i ; j<s.size(); ++j){
              if(check(s,i ,j)){
                  if(j-i > end-start){
                      start = i;
                      end = j;
                  }       
              }
          }
       } 
        
        for(int k = start ; k<=end ; ++k)
            ans += s[k];
        
        return ans;
    }
};