class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 0 || dividend == 0){
            return 0;
        }
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        int x = dividend;
        int y = divisor;
        double ans = 0;
        int sign = 1;
        if(x < 0 && y > 0){
            sign = -1;
        }else if(x > 0 && y < 0){
            sign = -1;
        }else if(x < 0 && y < 0){
            sign = 1;
        }else{
            sign = 1;
        }
        ans = x / y;
        return ans;
    }
};