class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_set<int> st;
        for(auto x: nums)
            st.insert(x);
       for(int i = 1 ; i < INT_MAX; ++i){
           if(st.find(i) == st.end())
               return i;
       } 
        return 0;
    }
};