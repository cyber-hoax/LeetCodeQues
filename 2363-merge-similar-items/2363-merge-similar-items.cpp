class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& it1, vector<vector<int>>& it2) {
        unordered_map<int,int> mp1, mp2;
        vector<vector<int>> ans; 
        
        sort(it1.begin(), it1.end());
         sort(it2.begin(), it2.end());
        for(int i = 0 ; i < it2.size(); ++i){
         
                cout << it2[i][0] << endl; 
            
        }
        
        for(int i = 0 ; i < it1.size(); ++i){
           
            mp1.insert({it1[i][0], it1[i][1]});
        }
        
        for(int i = 0 ; i < it2.size(); ++i){
            mp2.insert({it2[i][0], it2[i][1]});
        }
        
        
        for(int i = 0 ; i < it1.size(); ++i){
             // cout << h.first << " -> " << h.second << endl;
            vector<int> v;
            int sum = 0;
            if(mp2.find(it1[i][0]) != mp2.end()){
                cout << mp1[it1[i][0]] + mp2[it1[i][0]] << endl  ;
                sum +=  mp1[it1[i][0]] + mp2[it1[i][0]] ;
                v.push_back(it1[i][0] );
                v.push_back(sum);
            }
            else{
                v.push_back(it1[i][0] );
                v.push_back(it1[i][1]);
            }
            ans.push_back(v);
        }
           
        
         for(int i = 0 ; i < it2.size(); ++i){
              // cout << h.first << " -> " << h.second << endl;
            vector<int> v;
            
            if(mp1.find(it2[i][0]) == mp1.end()){
                // cout << mp1[it1[i][0]] + mp2[it1[i][0]] << endl  ;
               
                v.push_back(it2[i][0] );
                 v.push_back(it2[i][1] );
                 ans.push_back(v);
            }
           
           
        }
        
        
        sort(ans.begin(), ans.end());
        return ans ;
    }
};