class Solution {
public:
    bool isSubsequence(string s, string t) {
    int j = 0 , i =0 ;
        for(i = 0 ,  j = 0 ; i< t.size(); ++i){
            if(t[i] == s[j])
                j++; 
        }
        return j == s.size();
    }
};