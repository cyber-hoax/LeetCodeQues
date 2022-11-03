class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int count = 0 ; 
        unordered_map<string,int> mp;
        for(auto x : words){
            string temp = x;
            reverse(temp.begin(), temp.end());
            if(mp[temp] >0 ){
                count += 4;
                mp[temp] -- ;
            }
            else{
                mp[x] ++;
            }
        }
        for(auto it : mp){
            if(it.first[0] == it.first[1] && it.second > 0)
                
                return count + 2; 
        }
    
       return count ;
    }
};