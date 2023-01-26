class Solution {
public:
        bool isValid(string s) {
        stack<char>st;
        for(auto i:s){
            if(i=='{'||i=='['||i=='(')st.push(i);
            else if(!st.empty()){
                if(st.top()=='{'&&i=='}'){
                    st.pop();
                    continue;
                    }
                else if(st.top()=='['&&i==']'){
                    st.pop();
                    continue;
                    }
                else if(st.top()=='('&&i==')'){
                    st.pop();
                    continue;
                    }
                else return false;
            }
            else return false;
        }
        if(st.empty())return true;
        return false;
    }
};