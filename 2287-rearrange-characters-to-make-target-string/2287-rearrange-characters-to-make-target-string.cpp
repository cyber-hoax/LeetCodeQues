class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> hm , vm;
        for(auto x : s)
            hm[x] ++ ;
        
        for(auto x : target)
            vm[x] ++ ;
        
            
        int mini = INT_MAX;
        for(auto i : target){
            mini = min(mini, hm[i] / vm[i]);
        }
        return mini;
   
    }
};