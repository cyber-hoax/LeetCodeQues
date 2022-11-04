class Solution {
public:
    int maxPower(string s) {
        int maxm = 0 ; 
        for(int i = 0 ; i<s.size(); ++i){
            int temp = s[i];
            int count = 1;
            for(int j = i+1; j < s.size(); ++j){
                if(s[j] == temp)
                    count ++;
                else
                    break;
            }
            maxm = max(maxm, count );
        }
        return maxm;
    }
};