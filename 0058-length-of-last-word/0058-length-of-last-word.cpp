class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<char> arr;
        int length = 0;
       
        while(!s.empty() && s.back() == ' ') {
            s.pop_back();
        }
         if(s.length() == 1 && s != " ") return 1;
        int i = s.length() - 1;
        while( i >= 0 && s[i] != ' '){
            length++;
            i--;
        }
        return length;
    }
};