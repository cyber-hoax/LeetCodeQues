class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans;
        for(auto x : s){
            if(st.empty())
                st.push(x);
            else{
                if(!st.empty() && st.top() == x){
                    st.pop();
                    
                }
                else
                    st.push(x);
                    
            }
            
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
            return ans;
    }
};