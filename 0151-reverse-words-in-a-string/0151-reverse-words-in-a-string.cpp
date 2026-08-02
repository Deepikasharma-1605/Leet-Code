class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr;
        stringstream ss(s);
        string words;
        while(ss >> words){
            arr.push_back(words);
        }
        reverse(arr.begin() , arr.end());
        string answer = "";
        int n = arr.size();
        for(int i = 0 ; i < arr.size() ; i++){
            if(i != n - 1){
                answer += arr[i] + " ";
            }else if(i == n - 1){
                answer+= arr[i];
            }
        }
        return answer;
    }
};