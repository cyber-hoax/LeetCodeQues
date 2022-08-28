class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0 ;
        unordered_set<int> s;
        for(auto x : jewels)
            s.insert(x);
        
        for(auto x : stones){
            if(s.find(x) != s.end())
                count ++;
        }
        return count;
    }
};