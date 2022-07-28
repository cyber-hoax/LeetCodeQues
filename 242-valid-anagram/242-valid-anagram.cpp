class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
//         unordered_map<int,int> hm;
//         unordered_map<int, int> hm2;
//         for(auto x : s){
//             hm[x]++;
//         }
        
//         for(auto x : t)
//             hm2[x] ++ ;
        
        
//         for(auto i : s){
//             if(hm[i] != hm2[i]){
//                 return false;
//             }
//         }
        
        int count[26] = {0};
        
        for(int i =0 ;i<s.size(); i++){
            count[s[i] - 'a'] ++ ;
            count[t[i] - 'a'] -- ;
            
        }
        
        for(int i = 0 ; i<26 ; i++){
            if(count[i]) 
                return false;
        }
        
        return true;
    }
};