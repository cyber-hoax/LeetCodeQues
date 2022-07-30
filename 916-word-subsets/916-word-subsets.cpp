class Solution {
    
    vector<int> helper(string& s){
        vector<int> freq(26);
        for(auto& x : s)
            freq[x - 'a'] ++ ;
        return freq;
    }
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {        
        vector<int> maxfreq(26);
        vector<string> ans;
        
        for(auto &word : B ){
            vector<int> freq = helper(word);
            for(int i = 0 ; i<26; i++){
                maxfreq[i] = max(freq[i] , maxfreq[i]);
            }
        }
        
        for(auto& word: A){
            vector<int> freq = helper(word);
            int i = 0 ;
            for(; i<26;  i++){
                 if(freq[i] < maxfreq[i]) 
                    break;
            }
               
            if(i ==26)
                ans.push_back(word) ;                 
        }
        
        
        //   for(auto& word : A){
            //     vector<int> freq = helper(word);            
            //     int i = 0;
            //     for(;i < 26; i++) if(freq[i] < maxfreq[i]) break;
            //     if(i == 26) ans.push_back(word);
            // }
        return ans;
    }
    
};



/*
vector<int> countFreq(string& word){
	vector<int> freq(26);
	for(auto& c : word) freq[c - 'a']++;
	return freq;
}
vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
	vector<int> Maxfreq(26); // maintains minimum freq of each char required for a word to be universal word
	vector<string> ans;
	for(auto& word : B){
		vector<int> freq = countFreq(word);            
		for(int i = 0; i < 26; i++) Maxfreq[i] = max(Maxfreq[i], freq[i]);
	}        
	for(auto& word : A){
		vector<int> freq = countFreq(word);            
		int i = 0;
		for(;i < 26; i++) if(freq[i] < Maxfreq[i]) break;
		if(i == 26) ans.push_back(word);
	}
	return ans;
} 
*/