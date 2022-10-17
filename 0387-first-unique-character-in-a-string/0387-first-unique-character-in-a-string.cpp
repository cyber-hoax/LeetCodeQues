class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        int ans =-1;
       for(auto x : s)
           mp[x] ++;
        
        for(int i = 0 ; i < s.size() ; ++i ){
            if(mp[s[i]] == 1){
                ans= i ;
                return ans;
            }
                
               
            
        }
        return ans;
    }
};