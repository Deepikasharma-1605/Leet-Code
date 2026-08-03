class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string temp = "1";
        for(int i = 2; i <= n; i++){
            string next = "";
            int x = 0;
            while(x < temp.length()){
                char ch = temp[x];
                int count = 0;
                while(x < temp.length() && temp[x] == ch){
                    count++;
                    x++;
                }
                next += to_string(count);
                next += ch;
            }
            temp = next;
        }
        return temp;
    }
};