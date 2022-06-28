class Solution {
public:
    int minDeletions(string s) {
       vector<int> freq(26,0);
        int count = 0 ;
        
        for(auto x: s)
            freq[x - 'a'] ++ ;
        
//         priority_queue<int> q;
        
//        for(int i = 0; i< 26; i++){
//            if(freq[i]> 0)
//                q.push(freq[i]);
//        }
        
//         while(q.size() >1){
//             int ele = q.top();
//             q.pop();
//             if(ele == q.top()){
//                 if(ele - 1 >0)
//                     q.push(ele -1);
//                 count ++ ;
//                 }
            
            
//         }
        
        sort(freq.begin(), freq.end());
        
        for(int i = 24 ; i >=0 ;i--){
            if(freq[i] == 0)
                break;
            if(freq[i] >= freq[i+1]){
                int prev = freq[i];
                freq[i] = max(0, freq[i+1]-1);
                count += prev - freq[i];
            }
        }
        
        return count;
    }
};