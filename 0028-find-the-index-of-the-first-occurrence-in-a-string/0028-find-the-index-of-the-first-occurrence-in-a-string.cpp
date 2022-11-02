class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> v;
        for(int i =0 ; i < haystack.size(); ++i){
            if(needle[0] == haystack[i])
                v.push_back(i);
                
        }
        
        for(int i = 0 ; i < v.size(); ++i){
            int k = 0 ;
            int l= v[i];
            for(int j = v[i]; j< haystack.size(); ++j){
                if(haystack[j] != needle[k]) break;
                
                else{
                    k++;
                }
                
            }
            if(k == needle.size() ) return l;
        }
        return -1;
    }
};