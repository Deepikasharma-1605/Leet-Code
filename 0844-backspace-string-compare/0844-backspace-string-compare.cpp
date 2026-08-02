class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        vector<char> ss;
        vector<char> tt;
        for(int i  = 0 ; i < s.length() ; i++){
            ss.push_back(s[i]);
        }
        for(int i  = 0 ; i < t.length() ; i++){
            tt.push_back(t[i]);
        }
        for(char x : ss){
            if(x == '#' ){
                if(!st1.empty()){
                st1.pop();
                }
            }else{
                st1.push(x);
            }
        }
        for(char y : tt){
            if(y == '#'){
                if(!st2.empty()){
                st2.pop();
                }
            }else{
                st2.push(y);
            }
        }
        string ass = "";
        string att = "";
        for(; !st1.empty() ;){
            ass += st1.top();
            st1.pop();
        }
        for(; !st2.empty() ;){
            att += st2.top();
            st2.pop();
        }
        if(ass == att){
            return true;
        }
        return false;
    }
};