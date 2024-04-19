class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        while (l<=r){
            if (s[l] != s[r]) {
                string newL = string(s.begin() + l + 1, s.begin() + r + 1);
                string newLReversed = newL;
                reverse(newLReversed.begin(), newLReversed.end());
                string newR = string(s.begin() + l, s.begin() + r);
                string newRReversed = newR;
                reverse(newRReversed.begin(), newRReversed.end());
                return newL == newLReversed || newR == newRReversed;

            }
            l++;
            r--;
        }
        return true;

    }
};