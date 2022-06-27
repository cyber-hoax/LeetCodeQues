class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int downfall = 0;
        
        if(arr.size() <=2)
            return false;
        
        for(int i = 1; i<arr.size()-1; i++){
            if(downfall == 0){
                if(arr[i-1] < arr[i] && arr[i]> arr[i+1] ){
                    downfall ++;
                }
                if(arr[i-1] >= arr[i]){
                    return false;
            }
            }
            else{
                if(arr[i] <= arr[i+1])
                    return false;
            }
        }
        return downfall ==1  ;
    }
};