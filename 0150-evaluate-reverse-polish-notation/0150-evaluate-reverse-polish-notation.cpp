class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int tmp1,tmp2;
        for (string i  : tokens){
            if(i=="+"){
                tmp1 = s.top();
                s.pop();
                tmp2 =s.top();
                s.pop();
                s.push(tmp2+tmp1);
            }
            else if(i=="-"){
                tmp1 = s.top();
                s.pop();
                tmp2 =s.top();
                s.pop();
                s.push(tmp2-tmp1);
            }
            else if(i=="*"){
                tmp1 = s.top();
                s.pop();
                tmp2 =s.top();
                s.pop();
                s.push(tmp2*tmp1);
            }
            else if(i=="/"){
                tmp1 = s.top();
                s.pop();
                tmp2 =s.top();
                s.pop();
                s.push(tmp2/tmp1);
            }
            else s.push(stoi(i));
        }
        return s.top();
    }
};