class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans = 0;
        
        while(target > 1 && --maxDoubles >=0 ){
            int temp = target % 2 ;
            ans += 1 + temp;
            target /= 2;
        }
        
        return ans + target - 1; 
        
    }
};