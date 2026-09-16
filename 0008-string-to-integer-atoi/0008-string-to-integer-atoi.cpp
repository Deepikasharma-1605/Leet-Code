class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        string ans = "";
        int i = 0;
        while(i < s.length() && s[i] == ' '){
            i++;
        }
        if(i < s.length() && (s[i] == '-' || s[i] == '+')){
            if(s[i] == '-'){
                sign = -1;
            }
            i++;
        }
        for(; i < s.length() ; i++){
            if(isdigit(s[i])){
                ans+=s[i];
            }else{
                break;
            }
        }
        long long answer = 0;
        cout << ans << endl;
        for(int i = 0 ; i < ans.length() ; i++){
            answer = answer * 10 + (ans[i] - '0');
            if(sign == 1 && answer > INT_MAX){
                return INT_MAX;
            }
            if(sign == -1 && -answer < INT_MIN){
                return INT_MIN;
            }
        }
        return sign * answer;
    }
};