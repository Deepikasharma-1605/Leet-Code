class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        vector<string> arr;
        while(ss >> words){
            arr.push_back(words);
        }
        reverse(arr.begin() , arr.end());
        
        string x = "";
        int n = arr.size();
        for(int i = 0 ; i < arr.size() ; i++){
            if(i != n - 1){
            x+=arr[i];
            x += " ";
            }else{
                x += arr[i];
            }
        }
        return x;
    }
};