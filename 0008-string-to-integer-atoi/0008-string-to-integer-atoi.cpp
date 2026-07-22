class Solution {
public:
    int myAtoi(string s) {

        long long num = 0;
        string a = "";
        int sign = 1;

        int i = 0;

        // Skip leading spaces
        while(i < s.length() && s[i] == ' ')
            i++;

        // Check sign
        if(i < s.length() && (s[i] == '+' || s[i] == '-')){
            if(s[i] == '-')
                sign = -1;
            i++;
        }

        // Your same logic
        for(; i < s.length(); i++){
            if(isdigit(s[i])){
                a += s[i];
            }
            else{
                break;
            }
        }
        for(int i = 0 ; i < a.length() ; i++){
            num = num * 10 + (a[i] - '0');

            if(sign == 1 && num > INT_MAX)
                return INT_MAX;

            if(sign == -1 && -num < INT_MIN)
                return INT_MIN;
        }

        return sign * num;
    }
};