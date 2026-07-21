class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans = "";
        string ansf = "";
        bool found = true;
        if(s.empty()) found = true;
        for(int i = 0 ; i < s.size() ; i++){
            if(isalnum(s[i])){
                ans += s[i];
            }    
        }
        for(char ch : ans){
            ansf += tolower(ch);
        }
        int x = ansf.length();
        for(int i = 0 ; i < ansf.length() ; i++){
            if(ansf[i] != ansf[x - 1]){
                found = false;
                break;
            }else{
                found = true;
                x--;
            }
        }
        return found;
    }
};