class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> st;
        
        for(auto x : s){
            if(st.empty() || st.back().first != x)
                st.push_back({x,1});
            else if(++st.back().second == k)
                st.pop_back();
        }
        
        string ans= "" ;
        for(auto i : st){
            ans.append(i.second , i.first);
        }
        return ans;
    }
};