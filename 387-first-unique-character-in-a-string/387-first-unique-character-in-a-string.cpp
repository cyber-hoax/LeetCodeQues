class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> hm ; 
        for(auto it : s){
            hm[it] ++ ;
            
        }
       
        for(int i = 0 ; i< s.size() ; ++i){
            if(hm[s[i]] ==1  )
                return i ;
        }
        return -1;
    }
};