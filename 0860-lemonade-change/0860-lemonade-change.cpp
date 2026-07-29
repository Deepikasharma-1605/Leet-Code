class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ans5 = 0;
        int ans10 = 0;
        for(int i = 0 ; i < bills.size() ; i++){
            if(bills[i] == 5){
                ans5++;
            }else if(bills[i] == 10){
                if(ans5 == 0){
                    return false ;
                    break;
                }else{
                    ans5--;
                    ans10++;
                }
            }else if(bills[i] == 20){
                if(ans5 > 0 && ans10 > 0){
                    ans5--;
                    ans10--;
                }else if(ans5 >= 3){
                    ans5 -= 3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};