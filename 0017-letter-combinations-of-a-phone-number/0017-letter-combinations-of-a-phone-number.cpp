class Solution {
public:
    unordered_map<char , string> mp{
        {'2' , "abc"},
        {'3' , "def"},
        {'4' , "ghi"},
        {'5' , "jkl"},
        {'6' , "mno"},
        {'7' , "pqrs"},
        {'8' , "tuv"},
        {'9' , "wxyz"},
    };
    void solve(string digits , int index , string ans , vector<string> &answer){
        if(ans.length() == digits.length()){
            answer.push_back(ans);
            return;
        }
        string temp = mp[digits[index]];
        for(char ch : temp){
            ans.push_back(ch);
            solve(digits , index+1 , ans , answer );
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> answer;
        string ans = "";
        solve(digits , 0 , ans , answer);
        return answer;
    }
};