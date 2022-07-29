class Solution {
    
    string helper(string s){
        unordered_map<char, int> hm;
        string temp = "";
        int steps = 0;
        for(auto x : s){
            if(hm.find(x) != hm.end()){
                temp += hm[x]; 
            }
            else{
                hm.insert({x, steps++});
                temp += hm[x];
         
            }
        }
        return temp;
        
    }
    
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {       
        vector<string> ans;
        string patt = helper(pattern);  
        cout << " patt" << patt << endl; 
        for(auto x : words){
            string temp = helper(x);
            cout << temp ; 
            if(temp == patt)
                ans.push_back(x);
        }
        
        return ans;
    }
};


