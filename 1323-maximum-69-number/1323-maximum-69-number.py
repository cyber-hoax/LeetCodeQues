class Solution:
    def maximum69Number (self, num: int) -> int:
        a = str(num)
        changed = 0
        ans = "";
        for i in a:
            if changed == 0 and int(i) == 6 :
                ans += '9'
                changed = 1
                
            else:
                ans += i;
        res = int(ans);
        return res
                
        