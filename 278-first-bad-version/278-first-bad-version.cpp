// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1 , high =  n , mid;
        while(low < high){
             mid = ((unsigned int)low + (unsigned int)high) >> 1;
            if(!isBadVersion(mid))
                low = mid + 1;
            else high = mid;
        }
        return low;
    }
    
};
