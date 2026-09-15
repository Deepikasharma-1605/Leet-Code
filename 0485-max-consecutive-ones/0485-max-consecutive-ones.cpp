class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 1;
        int maxi = 0;
        int n = nums.size();
        if(nums.size() == 1 && nums[0] == 1) return 1;
        if(nums.size() == 1 && nums[0] == 0) return 0;
        for(int i = 0 ; i < n - 1 ; i++){
            if(nums[i] == 1 && nums[i + 1] == 1){
                count++;
            }else if(nums[i] == 0 && nums[i + 1] == 0){
                count = 0;
            }else{
                count = 1;
            }
            maxi = max(count , maxi);
        }
        return maxi;
    }
};