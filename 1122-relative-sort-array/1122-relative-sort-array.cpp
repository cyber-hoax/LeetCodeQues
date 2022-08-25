class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(auto x: arr1)
            mp[x] ++;
        
        vector<int> ans;
        vector<int> temp;
        for(auto x: arr2){
                while(mp[x] > 0){
                     ans.push_back(x);
                     mp[x] -- ;
                }           
        }
      
       
        for(auto x: mp){
            while(x.second > 0){
                 temp.push_back(x.first);
                 x.second --;
            }
         
               
        }
           
         sort(temp.begin(), temp.end());
        for(auto x : temp)
            ans.push_back(x);
        return ans;
    }
};