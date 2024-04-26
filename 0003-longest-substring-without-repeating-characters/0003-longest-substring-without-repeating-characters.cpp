class Solution {
public:
int lengthOfLongestSubstring(string s) {
    map<char, int> m;
    string longestSubString;
    int max_len=0;
    for (int i = 0; i < s.length(); i++){
        while (m[s[i]] > 0) {
            --m[longestSubString[0]];
            longestSubString.erase(0, 1);
        }
        ++m[s[i]];
        longestSubString += s[i];
        max_len = max(max_len, int(longestSubString.length()));
    }
    return max_len;
}
};