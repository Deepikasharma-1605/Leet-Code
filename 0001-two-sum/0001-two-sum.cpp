class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int x = -1;
        int y = -1;
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(nums[i] + nums[j] == target){
                    x = i ; 
                    y = j;
                }

            }
        }
        return {x , y};
        
    }
};