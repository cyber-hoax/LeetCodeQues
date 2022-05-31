class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0 ;
    
        while(i< s.size()-1){
            if(s[i] == '0'){
                int j = i+1;
                while(j < s.size()){
                    if(s[j] == '1'){
                        return false ;
                    }
                    j++ ;
                }
                
            }
            i++;
        }  
        return true ; 
    }
};