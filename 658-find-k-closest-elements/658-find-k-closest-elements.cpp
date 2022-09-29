class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        for(int i = 0 ; i < arr.size(); ++i){
            int temp = abs(arr[i]-x);
            q.push({temp, arr[i]});
        }
        vector<int> v;
        while(k--){
            v.push_back(q.top().second);
            q.pop();
        }
        sort(v.begin(), v.end());
        return v;
    }
};