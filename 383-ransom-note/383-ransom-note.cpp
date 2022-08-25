class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mp (126,0);
        for(auto x: magazine)
            mp[x]++;
        
        for(auto x: ransomNote){
            if(mp[x] >0) mp[x] -- ;
             else return false;
        }
        return true;
    }
};