class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st;
        for(auto n: sentence)
            st.insert(n);
        
        return st.size() >= 26 ;
    }
};