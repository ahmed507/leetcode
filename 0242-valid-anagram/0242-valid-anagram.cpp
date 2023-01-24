class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>ss(s.begin(),s.end());
        vector<char>tt(t.begin(),t.end());
        sort(ss.begin(),ss.end());
        sort(tt.begin(),tt.end());

        if(ss==tt&&s.size()==t.size()){
            return true;
        }
        return false;
    }
};