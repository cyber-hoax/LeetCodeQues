class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // 1st approach
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        // for(int i = 0 ; i < arr.size(); ++i){
        //     int temp = abs(arr[i]-x);
        //     q.push({temp, arr[i]});
        // }
        // vector<int> v;
        // while(k--){
        //     v.push_back(q.top().second);
        //     q.pop();
        // }
        // sort(v.begin(), v.end());
        // return v;
        
        //2nd
        int L = 0, R = size(arr)-1;
        while (R - L >= k) 
            if (x - arr[L] <= arr[R] - x) R--;
            else L++;
        return vector<int>(begin(arr) + L, begin(arr) + R + 1);
           
        
    }
};