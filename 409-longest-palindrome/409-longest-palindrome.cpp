class Solution {
public:
    int longestPalindrome(string s) {
         int freq[123] = {};
        for (int i = 0; i < s.size(); ++i) {
            ++freq[s[i]];
        }

        int odd = 0;
        for (int i = 65; i <= 122; ++i) {
            odd += freq[i] & 1;
        }

        return s.size() - odd + (odd > 0);
    }
};