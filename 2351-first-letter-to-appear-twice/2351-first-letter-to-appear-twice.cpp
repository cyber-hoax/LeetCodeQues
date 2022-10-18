class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<int> st;
        for(auto x : s){
            if(st.find(x) != st.end())
                return x;
            st.insert(x);
            
        }
        return 'a';
    }
};