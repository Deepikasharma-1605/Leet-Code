class Solution {
public:

    double pow(double x , long long n){
        long long answer = 1;
        if(n == 0){
            return 1;
        }
        double ans = pow(x , n/2);
        if(n % 2 == 0){
            return ans * ans;
        }
        return ans * ans * x;
        
    }
    double myPow(double x, int n) {
        long long N = n;
        if(n < 0){
            x = 1 / x;
           N = -N;
        }
        return pow(x , n);
    }
};