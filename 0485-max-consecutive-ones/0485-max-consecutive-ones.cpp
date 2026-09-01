class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        if(nums.size() == 1){
            if(nums[0] == 1){
                maxi = 1;
            }else{
                maxi = 0;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                count++;
                maxi = max(maxi , count);
            }else{
                count = 0;
            }
        }
        cout << maxi;
        return maxi;
    }
};