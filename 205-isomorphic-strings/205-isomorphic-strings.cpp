class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        
        vector<int> hm(256,-1) , hms(256,-1);
        for(int i=0; i< s.size(); i++){
            if(hm[s[i]] != hms[t[i]]) return false;
            hm[s[i]] = hms[t[i]] = i;
        }
        return true;
        
    }
};