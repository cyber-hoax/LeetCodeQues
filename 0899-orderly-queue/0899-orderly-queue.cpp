class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        if(k==1){
            string t = s+s;
            int n = s.size();
            string ans = s;
            for(int i = 1 ; i < s.size();++i){
                string temp = t.substr(i, n);
                if(temp < ans)
                    ans= temp;
            }
            return ans;
        }
        sort(s.begin(), s.end());
        return s;
    }
};