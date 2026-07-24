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
        
        ans = x / y;
        return ans;
    }
};