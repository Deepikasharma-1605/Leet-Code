class Solution {
public:
    bool ispalindrome(string &s , int x , int y){
        while(x < y){
            if(s[x] != s[y]){
                return false;
            }
            x++;
            y--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        vector<string> ans;
        int n = s.length();
        string lsize = "";
        for(int i = 0; i < n ; i++){
            for(int j = i ; j < n ; j++){
                if(ispalindrome(s , i , j)){
                    if(j - i + 1 > lsize.size()){
                        lsize = s.substr(i , j - i + 1);
                    }
                }
            }
        }
        return lsize;
    }
};