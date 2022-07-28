class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        unordered_map<int,int> hm;
        unordered_map<int, int> hm2;
        for(auto x : s){
            hm[x]++;
        }
        
        for(auto x : t)
            hm2[x] ++ ;
        
        
        for(auto i : s){
            if(hm[i] != hm2[i]){
                return false;
            }
        }
        
        return true;
    }
};