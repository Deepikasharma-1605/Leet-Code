class Solution {
public:
    int reverseBits(int n) {
        string s = "";
        for(int i = 0 ; i < 32 ; i++){
            s += (n % 2) + '0';
            n /= 2;
        }
        int number = 0;
        for(char bit : s){
            number = (number << 1) | (bit - '0');
        }
        return number;
    }
};