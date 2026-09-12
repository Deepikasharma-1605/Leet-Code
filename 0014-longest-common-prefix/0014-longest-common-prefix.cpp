class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end());
        string x = strs[0];
        string y = strs[strs.size() - 1];
        string s = "";
        for(int i = 0 ; i < x.length(); i++){
            if(x[i] == y[i]){
                s += x[i];
            }else{
                break;
            }
        }
        return s;
    }
};