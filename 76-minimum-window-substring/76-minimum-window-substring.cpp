class Solution {
public:
    string minWindow(string s, string t) {
        
        vector<int> table(128, 0);
        for (auto x : t){
            table[x]++;
        }
        
        int start = 0;
        int end = 0;
        int startMin = 0;
        int minimum = INT_MAX;
        int counter = t.size();
        
        while(end < s.size()){
            if(table[s[end]] > 0){
                counter --;
            }
            table[s[end]]--;
            end++;
            
            while(counter == 0){
                if(end - start < minimum){
                    startMin = start;
                    minimum = end - start ;
                }
                table[s[start]] ++ ;
                
                if(table[s[start]] > 0){
                    counter++;
                }
                start++;
            }
        }
        
        if( minimum == INT_MAX)
           return "";
        
        return s.substr(startMin, minimum);
    }
};