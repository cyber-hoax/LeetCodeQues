class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26)
            return false;
        unordered_set<char> st(26);
        for(auto n: sentence)
            st.insert(n);
        
        return st.size() >= 26 ;
    }
};