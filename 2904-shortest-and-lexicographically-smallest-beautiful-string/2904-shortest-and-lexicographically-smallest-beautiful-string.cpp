class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string smallest = "";
        vector<string> v;
        for(int start = 0; start < s.length(); start++) {
            for(int length = 0; start + length <= s.length(); length++) {
                v.push_back(s.substr(start, length));
            }
        }
        vector<string> ans;
        for(int i = 0 ; i < v.size() ; i++){ 
            int ones = 0;
            for(int j = 0 ; j <v[i].length() ; j++){
                if(v[i][j] == '1'){
                    ones++;
                }
                if(ones == k){
                    ans.push_back(v[i]);
                }
            }
        }
        sort(ans.begin(),ans.end());
        int n = ans.size();
        int min = INT_MAX;
        string answer = "";
        for(int i = 0 ; i < ans.size() ; i++){
            if(ans[i].length() < min){
                min = ans[i].length();
                answer = ans[i];
            }
        }
        return answer;
    }
};