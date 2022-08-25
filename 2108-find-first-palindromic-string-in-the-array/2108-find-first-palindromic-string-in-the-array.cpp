class Solution {
    bool isPalindrome(string& word){
        int i =0 , j = word.size() -1;
        while(i<j){
            if(word[i] != word[j])
                return false;
            else{
                i++ ;
                j-- ;
            }
        }
        return true;
    }
        
public:
    string firstPalindrome(vector<string>& words) {
        for(auto x : words){
            if(isPalindrome(x))
                return x;
        }
        return "";
    }
};