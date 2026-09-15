class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr;
        stringstream ss(s);
        string words;
        while(ss >> words){
            arr.push_back(words);
        }
        string result = "";
        int n = arr.size();
        reverse(arr.begin() , arr.end());
        for(int i = 0 ; i < n ; i++){
            if(i != n - 1){
                result += arr[i];
                result += " ";
            }else{
                result += arr[i];
            }
        }
        return result;
    }
};