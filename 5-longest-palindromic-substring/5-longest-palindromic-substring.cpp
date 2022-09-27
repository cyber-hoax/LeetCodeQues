class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0 , end = 0 , maxLen = 1;
        
        for(int i = 0 ; i < s.size(); ++i){
            int l = i, r= i;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                r++;
                l--;
            }
            if(maxLen < r-l-1){
                maxLen = r-l-1;
                start = l +1;
                end = r -1;
            }
        }
        
         for(int i = 0 ; i < s.size()-1; ++i){
            int l = i, r= i+1;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                r++;
                l--;
            }
            if(maxLen < r-l-1){
                maxLen = r-l-1;
                start = l +1;
                end = r -1;
            }
        }
        
        return s.substr(start, maxLen);
    }
};