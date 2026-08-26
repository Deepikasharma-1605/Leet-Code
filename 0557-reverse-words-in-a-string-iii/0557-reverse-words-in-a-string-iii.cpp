class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words = "";
        vector<string> arr;
        string ans = "";
        while(ss >> words){
            arr.push_back(words);
        }
        for(int i = 0 ; i < arr.size() ; i++){
            reverse(arr[i].begin() , arr[i].end());
        }
        for(int i = 0 ; i < arr.size() ; i++){
            ans += arr[i];
            if(i != arr.size() - 1){
                ans += " ";
            }
        }
        return ans;
    }
};