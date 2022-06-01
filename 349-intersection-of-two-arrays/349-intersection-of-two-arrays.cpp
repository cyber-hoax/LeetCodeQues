class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hm;
        unordered_set<int> se;
        vector<int> a ; 
        for(auto x : nums1)
            hm[x]++;
    
    
    for(auto x : nums2){
        if(hm.find(x) != hm.end()){
            se.insert(x);
            hm[x] -- ;
        }
    }
    
    for(auto x :se)
        a.push_back(x);
        
        return a ;
    }
};