class Solution
{
    public:
        string makeGood(string s)
        {
            stack<char> st;
            string ans = "";
            for (auto x: s)
            {
                if (st.empty())
                    st.push(x);

                else
                {
                    char temp = x;
                    char match = st.top();
                    if (match - 'a' == (temp - 'a') + 32 || ( match - 'a') + 32 == temp - 'a' )
                        st.pop();
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