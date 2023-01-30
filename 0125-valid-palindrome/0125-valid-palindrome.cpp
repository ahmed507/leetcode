class Solution {
public:
    bool isPalindrome(string s) {
        regex r("[^a-zA-Z0-9]+");
        s = regex_replace(s,r,"");
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i = 0,j=s.length()-1;
        while (i<=j){
            if(s[i]!=s[j])return false;
            ++i;
            --j;
        }
        
        return true;
    }

};