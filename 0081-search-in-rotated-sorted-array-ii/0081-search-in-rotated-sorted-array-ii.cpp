class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool found = false;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                found = true;
            }
        }
        if(found){
            return true;
        }else{
            return false;
        }
    }
};