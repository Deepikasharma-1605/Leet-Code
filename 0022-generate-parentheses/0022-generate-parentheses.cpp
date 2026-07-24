class Solution {
public:
    void help(int open , int close , string curr ,int n, vector<string> &arr){
        if(curr.length() == 2*n){
            arr.push_back(curr);
            return;
        }
        if(open < n){
            help(open + 1 , close , curr + '(' , n , arr);
        }
        if(open > close){
            help(open  , close + 1 , curr + ')' , n , arr);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> arr;
        help(0 , 0 , "" , n , arr);
        return arr;
    }
};