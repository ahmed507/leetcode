class Solution {
    
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtracking(n, 0, 0, "", res);
        return res;
    }
private:
    void backtracking(int n, int open, int close, string s, vector<string>& res){
        if(open==n && close==n){
            res.push_back(s);
            return;
        }
        if(open<n){
            backtracking(n,open+1,close,s+'(',res);
        }
        if(open>close){
            backtracking(n,open,close+1,s+')',res);
        }
    }
    
};