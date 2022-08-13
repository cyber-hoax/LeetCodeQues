class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i = 1;
        vector<string> v(n);
        while(i <= n){
            if(i % 3 == 0 && i%5 ==0)
                v[i-1] += "FizzBuzz";
            
            else if(i%3 ==0)
                v[i-1] += "Fizz";
            
            else if(i%5 == 0)
                v[i-1] += "Buzz";
            
            else
                v[i-1] += to_string(i);
            i++ ; 
        }
        return v;
    }
};