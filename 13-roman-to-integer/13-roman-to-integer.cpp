class Solution {
public:
    int romanToInt(string s) {
//         if (s.empty()) return 0;
        
//         unordered_map<char,int> table {
//             {'I', 1},
//             {'V', 5},
//             {'X', 10},
//             {'L', 50},
//             {'C', 100},
//             {'D', 500},
//             {'M', 1000}
//         };
        
//         int ans = 0 ; 
        
//         for(int i  = 0 ; i< s.size()-1 ; ++i){
//             if(table[s[i]] < table[s[i+1]])
//                 ans -= table[s[i]];
//             else
//                 ans += table[s[i]];
//         }
        
//         ans += table[s.back()];
        
        
//         return ans;
        
        
    vector<int> roman(22,0);
    roman['I' - 'C'] = 1;
    roman['V' - 'C'] = 5;
    roman['X' - 'C'] = 10;
    roman['L' - 'C'] = 50;
    roman['C' - 'C'] = 100;
    roman['D' - 'C'] = 500;
    roman['M' - 'C'] = 1000;
        
        int value= 0 ;
        for(int i = 0 ; i <s.size()-1 ; ++i){
             if(roman[s[i] - 'C']>=roman[s[i+1] - 'C'])
        {
            value = value + roman[s[i] - 'C'];
        }
        else
        {
            value = value - roman[s[i] - 'C'];
        }
        }
        
        value += roman[s[s.size()-1] - 'C'];
        
        return value;
    
    }
};