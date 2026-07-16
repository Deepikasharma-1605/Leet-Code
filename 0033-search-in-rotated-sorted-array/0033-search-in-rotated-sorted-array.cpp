class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = 0;
        bool found = false;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                ans = i;
                found = true;
                break;
            }
        }
        if(!found){
            ans = -1;
        }
        return ans;
    }
};